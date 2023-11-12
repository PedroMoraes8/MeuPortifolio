def valorLetra(letra):
    if((letra=='a')or(letra=='A')):
	#||(letra=='á')||(letra=='à')||(letra=='À')||(letra=='Á')||(letra=='Â')||(letra=='â')
        return 1
	
    elif((letra=='b')or(letra=='B')): 
	    return 2
	
     elif((letra=='c')or(letra=='C')): 
		#||(letra=='Ç')||(letra=='ç')
		return 3
	
    else if((letra=='d')||(letra=='D'))
		return 4;

    else if((letra=='e')||(letra=='E')) 
		#||(letra=='Ê')||(letra=='É')||(letra=='é')||(letra=='ê')
		return 5;

    else if((letra=='f')||(letra=='F'))
		return 6;

    else if((letra=='g')||(letra=='G')) 

		return 7;
 
    else if((letra=='h')||(letra=='H')) 
    {
		return 8;
	} 
    else if ((letra=='i')||(letra=='j')||(letra=='y')||(letra=='I')||(letra=='J')||(letra=='Y')) 
    {
		return 9;
	} 
    else if((letra=='k')||(letra=='K')) 
    {
		return 10;
	} 
    else if((letra=='l')||(letra=='L'))
    {
		return 20;
	} 
    else if((letra=='m')||(letra=='M'))
    {
		return 30;
	} 
    else if((letra=='n')||(letra=='N')) 
    { //||(letra=='~')
		return 40;
	} 
	/* else if ((letra=='ã')||(letra=='Ã'))
	{
		return 41;
	}//õãñ
	*/
    else if((letra=='o')||(letra=='O')) 
    {
		//||(letra=='Ó')||(letra=='Ò')||(letra=='ó')||(letra=='ò')
		return 50;
	} 
    else if((letra=='p')||(letra=='P'))
    {
		return  60;
	} 
    else if((letra=='q')||(letra=='Q'))
    {
		return  70;
	} 
    else if((letra=='r')||(letra=='R'))
    {
		//||(letra=='Ñ')||(letra=='ñ')
		return 80;
	} 
    else if((letra=='s')||(letra=='S'))
    {
		//||(letra=='Õ')||(letra=='õ')
		return 90;
	} 
    else if((letra=='t')||(letra=='T'))
    {
		return 100;
	} 
    else if ((letra=='u')||(letra=='v')||(letra=='w')||(letra=='U')||(letra=='V')||(letra=='W')) 
    {
		return 200;
	} 
    else if((letra=='x')||(letra=='X')) 
    {
		return 300;
	} 
    else if((letra=='z')||(letra=='Z'))
    {
		return 400;
	} 
	else 
	{
		return 0;
	}

}