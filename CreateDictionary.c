#include<stdio.h>
#include <stdlib.h>

void f1f0pl3()
{
	int n0,n1,n2,n3,n4,n5;
	char str[4];
	str[3]=10; //换行
	
	FILE *fp=fopen("1-0pl3.txt","w");  
    if(fp==NULL)  
    {  
        return;
    } 
	
	
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		//for(n1=48;n1<58;n1++)
		//{
			str[1]=45;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
		//}
	}
	fclose(fp);	
	return;				
}
void f1f0pl4()
{
	int n0,n1,n2,n3,n4,n5;
	char str[5];
	str[4]=10; //换行
	
	FILE *fp=fopen("1-0pl4.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		//for(n1=48;n1<58;n1++)
		//{
			str[1]=45;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		//}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			//for(n2=48;n2<58;n2++)
			//{
				str[2]=45;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			//}
			
		}
	}
	fclose(fp);	
	return;				
}
void f2f6pl3()
{
	int n0,n1,n2,n3,n4,n5;
	char str[4];
	str[3]=10; //换行
	
	FILE *fp=fopen("2-6pl3.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		//for(n1=97;n1<123;n1++)
		//{
			str[1]=45;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
		//}
	}
	fclose(fp);	
	return;				
}
void f2f6pl4()
{
	int n0,n1,n2,n3,n4,n5;
	char str[5];
	str[4]=10; //换行
	
	FILE *fp=fopen("2-6pl4.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		//for(n1=97;n1<123;n1++)
		//{
			str[1]=45;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		//}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			//for(n2=97;n2<123;n2++)
			//{
				str[2]=45;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			//}
			
		}
	}
	fclose(fp);	
	return;				
}
void f3f6pl3()
{
	int n0,n1,n2,n3,n4,n5;
	char str[4];
	str[3]=10; //换行
	
	FILE *fp=fopen("3-6pl3.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}

	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
	}
	fclose(fp);	
	return;				
}
void f3f6pl4()
{
	int n0,n1,n2,n3,n4,n5;
	char str[5];
	str[4]=10; //换行
	
	FILE *fp=fopen("3-6pl4.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}

	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		str[1]=45;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			str[2]=45;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			str[2]=45;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			str[2]=45;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			str[2]=45;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			str[2]=45;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			str[2]=45;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			str[2]=45;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			
		}
	}
	fclose(fp);	
	return;				
}
void f10pl1()
{
	int n0,n1,n2,n3,n4,n5;
	char str[2];
	str[1]=10; //换行
	
	FILE *fp=fopen("10pl1.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		fprintf(fp,"%s", str);
	}
	fclose(fp);	
	return;				
}	
void f10pl2()
{
	int n0,n1,n2,n3,n4,n5;
	char str[3];
	str[2]=10; //换行
	
	FILE *fp=fopen("10pl2.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			fprintf(fp,"%s", str);
			
		}
	}
	fclose(fp);	
	return;				
}
void f10pl3()
{
	int n0,n1,n2,n3,n4,n5;
	char str[4];
	str[3]=10; //换行
	
	FILE *fp=fopen("10pl3.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
		}
	}
	fclose(fp);	
	return;				
}
void f10pl4()
{
	int n0,n1,n2,n3,n4,n5;
	char str[5];
	str[4]=10; //换行
	
	FILE *fp=fopen("10pl4.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	fclose(fp);	
	return;				
}
void f10pl5()
{
	int n0,n1,n2,n3,n4,n5;
	char str[6];
	str[5]=10; //换行
	
	FILE *fp=fopen("10pl5.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<58;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	fclose(fp);	
	return;				
}
void f26pl1()
{
	int n0,n1,n2,n3,n4,n5;
	char str[2];
	str[1]=10; //换行
	
	FILE *fp=fopen("26pl1.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		fprintf(fp,"%s", str);
	}
	fclose(fp);	
	return;				
}	
void f26pl2()
{
	int n0,n1,n2,n3,n4,n5;
	char str[3];
	str[2]=10; //换行
	
	FILE *fp=fopen("26pl2.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			fprintf(fp,"%s", str);
			
		}
	}
	fclose(fp);	
	return;				
}
void f26pl3()
{
	int n0,n1,n2,n3,n4,n5;
	char str[4];
	str[3]=10; //换行
	
	FILE *fp=fopen("26pl3.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
		}
	}
	fclose(fp);	
	return;				
}	
void f26pl4()
{
	int n0,n1,n2,n3,n4,n5;
	char str[5];
	str[4]=10; //换行
	
	FILE *fp=fopen("26pl4.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	fclose(fp);	
	return;				
}
void f26pl5()
{
	int n0,n1,n2,n3,n4,n5;
	char str[6];
	str[5]=10; //换行
	
	FILE *fp=fopen("26pl5.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	fclose(fp);	
	return;				
}
void f36pl2()
{
	int n0,n1,n2,n3,n4,n5;
	char str[3];
	str[2]=10; //换行
	
	FILE *fp=fopen("36pl2.txt","a");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			fprintf(fp,"%s", str);
			
		}
	}
	
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			fprintf(fp,"%s", str);
			
		}
	}
	
	fclose(fp);	
	return;				
}
void f36pl3()
{
	int n0,n1,n2,n3,n4,n5;
	char str[4];
	str[3]=10; //换行
	
	FILE *fp=fopen("36pl3.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				fprintf(fp,"%s", str);
			}
			
		}
	}
	fclose(fp);	
	return;				
}
void f36pl4()
{
	int n0,n1,n2,n3,n4,n5;
	char str[5];
	str[4]=10; //换行
	
	FILE *fp=fopen("36pl4.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<58;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	for(n0=48;n0<58;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<58;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<58;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					fprintf(fp,"%s", str);
				}
			}
			
		}
	}
	fclose(fp);	
	return;				
}
void f36pl5()
{
	int n0,n1,n2,n3,n4,n5;
	char str[6];
	str[5]=10; //换行
	
	FILE *fp=fopen("36pl5.txt","w");  
    if(fp==NULL)  
    {  
        return;  
    } 
	
	
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=48;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=48;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=48;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=48;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=48;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=48;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=97;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=48;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=97;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=48;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=97;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=48;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=97;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=48;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	for(n0=48;n0<123;n0++)
	{
		str[0]=n0;
		for(n1=48;n1<123;n1++)
		{
			str[1]=n1;
			for(n2=48;n2<123;n2++)
			{
				str[2]=n2;
				for(n3=48;n3<123;n3++)
				{
					str[3]=n3;
					for(n4=97;n4<123;n4++)
					{
						str[4]=n4;
						fprintf(fp,"%s", str);
					}
				}
			}
			
		}
	}
	fclose(fp);	
	return;				
}


int main(){
	printf("1.10个数字全排带(-)符号3位;\n2.10个数字全排带(-)符号4位;\n3.26个字母全排带-符号3位;\n4.26个字母全排带-符号4位;\n5.26个字母+10个数字全排带-符号3位;\n6.26个字母+10个数字全排带-符号4位;\n7.10个数字全排1位;\n8.10个数字全排2位;\n9.10个数字全排3位;\n10.10个数字全排4位;\n11.10个数字全排5位;\n12.26个字母全排1位;\n13.26个字母全排2位;\n14.26个字母全排3位;\n15.26个字母全排4位;\n16.26个字母全排5位;\n17.26个字母+10个数字全排1位;\n18.26个字母+10个数字全排1位;\n19.26个字母+10个数字全排1位;\n20.26个字母+10个数字全排5位;\n\n请输入您选择相应的序号：");
	
	int op=0;
	scanf("%d",&op);
	
	switch(op){
		case 1 :
			f1f0pl3();
			printf("字典已保存到当前目录下的“1-0pl3.txt”文件中");
			break;
		case 2 :
			f1f0pl4();
			printf("字典已保存到当前目录下的“1-0pl4.txt”文件中");
			break;
		case 3 :
			f2f6pl3();
			printf("字典已保存到当前目录下的“2-6pl3.txt”文件中");
			break;
		case 4 :
			f2f6pl4();
			printf("字典已保存到当前目录下的“2-6pl4.txt”文件中");
			break;
		case 5 :
			f3f6pl3();
			printf("字典已保存到当前目录下的“3-6pl3.txt”文件中");
			break;
		case 6 :
			f3f6pl4();
			printf("字典已保存到当前目录下的“3-6pl4.txt”文件中");
			break;
		case 7 :
			f10pl1();
			printf("字典已保存到当前目录下的“10pl1.txt”文件中");
			break;
		case 8 :
			f10pl2();
			printf("字典已保存到当前目录下的“10pl2.txt”文件中");
			break;
		case 9 :
			f10pl3();
			printf("字典已保存到当前目录下的“10pl3.txt”文件中");
			break;
		case 10 :
			f10pl4();
			printf("字典已保存到当前目录下的“10pl4.txt”文件中");
			break;
		case 11 :
			f10pl5();
			printf("字典已保存到当前目录下的“10pl5.txt”文件中");
			break;
		case 12 :
			f26pl1();
			printf("字典已保存到当前目录下的“26pl1.txt”文件中");
			break;
		case 13 :
			f26pl2();
			printf("字典已保存到当前目录下的“26pl2.txt”文件中");
			break;
		case 14 :
			f26pl3();
			printf("字典已保存到当前目录下的“26pl3.txt”文件中");
			break;
		case 15 :
			f26pl4();
			printf("字典已保存到当前目录下的“26pl4.txt”文件中");
			break;
		case 16 :
			f26pl5();
			printf("字典已保存到当前目录下的“26pl5.txt”文件中");
			break;
		case 17 :
			f36pl2();
			printf("字典已保存到当前目录下的“36pl2.txt”文件中");
			break;
		case 18 :
			f36pl3();
			printf("字典已保存到当前目录下的“36pl3.txt”文件中");
			break;
		case 19 :
			f36pl4();
			printf("字典已保存到当前目录下的“36pl4.txt”文件中");
			break;
		case 20 :
			f36pl5();
			printf("字典已保存到当前目录下的“36pl5.txt”文件中");
			break;
		default:
			printf("无效的输入！");
	}
	
	printf("\n 程序已结束，感谢您的使用！\n");
	return 0;
}