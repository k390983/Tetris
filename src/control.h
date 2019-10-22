
int control_x;
int control_y;
int control_r;

int input_flag;

int input_R;
int input_L;
int input_S;

float inputTimer_R;
float inputTimer_L;
float inputTimer_S;

#define INPUT_SPEED 0.4

void control(){

	int currentTime = timeFromStart();

	//Right

    if((GetKeyState(VK_RIGHT) & 0x8000) && currentTime - inputTimer_R > INPUT_SPEED){
        control_x = 1;

    }else if((GetKeyState(VK_RIGHT) & 0x8000)){
    	if(input_R == 0){
    		control_x = 1;
    		input_R = 1;

    	}


    }else{
    	inputTimer_R = timeFromStart();
    	input_R = 0;

    }

    //Left


    if((GetKeyState(VK_LEFT) & 0x8000) && currentTime - inputTimer_L > INPUT_SPEED){
        control_x = -1;

    }else if((GetKeyState(VK_LEFT) & 0x8000)){
    	if(input_L == 0){
    		control_x = -1;
    		input_L = 1;

    	}


    }else{
    	inputTimer_L = timeFromStart();
    	input_L = 0;

    }

    //Down

    if(GetKeyState(VK_DOWN) & 0x8000){
        control_y = 1;
        
    }

    //Rotation

    if((GetKeyState(VK_SPACE) & 0x8000) && currentTime - inputTimer_S > INPUT_SPEED){
        control_r = 1;

    }else if((GetKeyState(VK_SPACE) & 0x8000)){
    	if(input_S == 0){
    		control_r = 1;
    		input_S = 1;
            play_rotate();

    	}


    }else{
    	inputTimer_S = timeFromStart();
    	input_S = 0;

    }

}