    #include<stdio.h>
    #include<conio.h>
   
    int ucln(int a,int b)
    {    	
        while(a!=b){
        	if(a>b)
        		a -= b;
       		else	
       			b -= a;
        }
        return a;
    }
    void main()
    {
        int a,b;
        printf("Nhap hai so :");
        scanf("%d%d",&a,&b);
        printf("Boi chung nho nhat: %d",a*b/ucln(a,b));
        getch();
    }