//.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
main()
{
	int h,w,l,Area;
	
	printf(" \n  Enter the height ");
	scanf("%d",&h);
	
	printf(" \n Enter the width ");
	scanf("%d",&w);
	
	printf(" \n Enter the length ");
	scanf("%d",&l);
	
	Area=2*(w*l+h*l+h*w);
	
	printf(" \n Area of rectangular prism %d",&Area);
	
	
}
