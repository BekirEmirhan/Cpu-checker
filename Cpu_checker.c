#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *inf;
	stdout = freopen("output file","a",stdout);
	inf = fopen("info file","w++");
	system("sar -u 2 1 > info file"); 
	char *str = (char*)malloc(sizeof(char)*100);
	fgets(str,100,inf);
	fgets(str,100,inf);
	fgets(str,100,inf);
	fgets(str,100,inf);
	//printf("%s\n",str+74);
	int Nullcpu = atof(str+74);
	int cpu = 100- Nullcpu;
	printf("%f\n",cpu);
	int cont = 0;
	while (1){
		if(cpu >= 90){
		system("sleep 1m");
		cont+=1;
		if(cont >= 10)
		{
			system("mail (write your mail) -s '->High Cpu Usage' < send your message");
			cont = 0;
		}
		}else cont=0;
		system("sar -u 2 1 > file_name to get output of cpu usage"); 
		fgets(str,100,inf);
		fgets(str,100,inf);
		fgets(str,100,inf);
		fgets(str,100,inf);
		Nullcpu = atof(str+74);
		cpu = 100- Nullcpu;
		printf("%f\n",cpu);
	}
	fclose(inf);


return 0;
}
