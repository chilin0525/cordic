// CORDIC algoirthm to calculate sin and cos
// by integer arithmetic

#include<stdio.h>


int atan(int k){
	if (k==0){
		return 450000;
	}else if(k==1){
		return 265651;
	}else if(k==2){
		return 140362;
	}else if(k==3){
		return 71250;	
	}else if(k==4){
		return 35763;
	}else if(k==5){
		return 17899;
	}else if(k==6){
		return 8952;
	}else if(k==7){
		return 4476;
	}else if(k==8){
		return 2238;
	}else if(k==9){
		return 1119;
	}else if(k==10){
		return 560;
	}else if(k==11){
		return 280;
	}else if(k==12){
		return 140;
	}else if(k==13){
		return 70;
	}else if(k==14){
		return 35;
	}else if(k==15){
		return 17;
	}else if(k==16){
		return 9;
	}else if(k==17){
		return 4;
	}else if(k==18){
		return 2;
	}else{
		return 1;
	}
	return 1;
}

void cordic(int th, int itr, int x, int y){
	int source_th = th;
	for(int i=0;i<itr;i++){
		int pre_x = x;
		if (th>=0){
			x -= (y>>i);
			y += (pre_x>>i);
			th -= atan(i);
		} else {
			x += (y>>i);
			y -= (pre_x>>i);
			th += atan(i);
		}
	}
	printf("%d %d %d\n", source_th, x, y);
	return; 
}

int main(){
	int x = 6072529;
	int y = 0;
	int N;

	scanf("%d", &N);
	printf("%d\n", N);
	
	for(int i=0;i<N;i++){
		int input_num;
		scanf("%d", &input_num);
		cordic(input_num, 20, x, y);
	}

	return 0;
}
