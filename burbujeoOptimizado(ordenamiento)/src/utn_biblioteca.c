
#include <stdio_ext.h>
#include <stdlib.h>


int utn_int	(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;

	if(minimo<maximo && reintentos>=0)
	{
		printf("%s",mensaje);
			do
			{
				__fpurge(stdin);
				if(scanf("%d",pResultado)==1)
				{
					if(*pResultado>=minimo && *pResultado<=maximo)
					{
						retorno = 0;
						break;
					}
					else
					{
						printf("%s",mensajeError);
						reintentos--;
					}
				}
				else
				{
					printf("%s",mensajeError);
					reintentos--;
				}
			}while(reintentos>=0);
	}
	else
	{
		printf("Ingreso paramentros invalidos en la funcion.");
	}
	return retorno;

}


int utn_float(float* pResultado,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos)
{
	int retorno = -1;

	if(minimo<maximo && reintentos>=0)
	{
		printf("%s",mensaje);
			do
			{
				__fpurge(stdin);
				if(scanf("%f",pResultado)==1)
				{
					if(*pResultado>=minimo && *pResultado<=maximo)
					{
						retorno = 0;
						break;
					}
					else
					{
						printf("%s",mensajeError);
						reintentos--;
					}
				}
				else
				{
					printf("%s",mensajeError);
					reintentos--;
				}
			}while(reintentos>=0);
	}
	else
	{
		printf("Ingreso paramentros invalidos en la funcion.");
	}
	return retorno;

}



int utn_char(char* pResultado,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos)
{
	int retorno = -1;

	if(minimo<maximo && reintentos>=0)
	{
		printf("%s",mensaje);
			do
			{
				__fpurge(stdin);
				if(scanf("%c",pResultado)==1)
				{
					if(*pResultado>=minimo && *pResultado<=maximo)
					{
						retorno = 0;
						break;
					}
					else
					{
						printf("%s",mensajeError);
						reintentos--;
					}
				}
				else
				{
					printf("%s",mensajeError);
					reintentos--;
				}
			}while(reintentos>=0);
	}
	else
	{
		printf("Ingreso paramentros invalidos en la funcion.");
	}
	return retorno;

}
