
int screen[23][12];

int centerPos_x;
int centerPos_y;
int type;
int rotation;
int input_R;
int input_L;

int control_x;
int control_y;
int control_r;

int score;

#define SLEEP 150
#define DROPSPEED 1
#define MOVESPEED 0.1
#define ROTATIONSPEED 0.2

void gameloop(){

    int i, j;

    float timeFromDrop = 0;
    float timeFromMove = 0;
    float timeFromInput = 0;
    float timeFromRotate  =0;
    float currentTime = 0;

    centerPos_x = 0;
    centerPos_y = 0;

    input_flag = 0;

    int input_R = 0;
    int input_L = 0;

    score = 0;

    next_type = (rand() % 6) + 1;

    startup();

    spawner();

    centerPos_x = 5;

    while(1){

        control();

        currentTime = timeFromStart();

        //Rotation

        if(currentTime - timeFromRotate > ROTATIONSPEED){
            timeFromRotate = timeFromStart();

            if(control_r == 1){

                if(rotation < 4){
                    rotation += 1;

                }else{
                    rotation = 1;

                }  

                control_r = 0;

                shape();

                if(yCollision() == 1){
                    spawner();

                }

                shape();

            }

        }

        //Movement and collisions

        if(currentTime - timeFromMove > MOVESPEED){
            timeFromMove = timeFromStart();

            //Vertical movement

            if(control_y != 0){
                centerPos_y += control_y;

                shape();

                if(yCollision() == 1){
                    spawner();

                }

                control_y = 0;

                shape();

            }
            

            //Horizontal movement

            if(control_x != 0){

                shape();

                if(xCollision(control_x) == 0){
                    centerPos_x += control_x;
                    shape();

                }

                control_x = 0;

            }

        }

        //Drop

        if(currentTime - timeFromDrop > DROPSPEED){
            timeFromDrop = timeFromStart();
            
            shape();

            if(yCollision() == 1){
                    spawner();

            }

            centerPos_y++;

            shape();

        }

        //Check rows

        check();

        //Draw

        draw();

    }

}