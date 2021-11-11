#ifndef MODIFICAR_SERVICIOS_C
#define MODIFICAR_SERVICIOS_C

#include<stdio.h>
#include<stdlib.h>
#include"../estructuras.h"
#include"../prototipos.h"


void modificar_servicios() {
    int id_servicio;
    printf("Ingrese el id del servicio a modificar: ");scanf("%d",id_servicio);
    FILE *archivo_servicios;
    if((archivo_servicios=fopen("servicios/servicios.dat","r+b"))!=NULL){
        servicios e_servicio;
        fread(&e_servicio,sizeof(e_servicio),1,archivo_servicios);
        while(!feof(archivo_servicios)){
            if(id_servicio==e_servicio.id){
                do{
                    system("cls");
                    printf("CAMBIO PROPIEDADES DEL SERVICIO %d\n",id_servicio);
                    printf("1. Cambiar tipo");
                    printf("2. Cambiar nombre");
                    printf("3. Cambiar precio");
                    printf("4. Atras");
                    scanf("%d",seleccion);
                }while(seleccion<1 || seleccion>4);
                switch(seleccion){
                    case 1:
                        printf("Ingresar nuevo el tipo de servicio: ");scanf("%d",e_servicio.tipo);
                    break;
                    case 2:
                        printf("Ingresar nuevo el tipo de servicio: ");scanf("%d",e_servicio.tipo);
                    break;
                    case 3:
                        
                    break;
                }
            }
            fread(&e_servicio,sizeof(e_servicio),1,archivo_servicios);
        }
    }else{
        printf("Error modificar servicios\n");
    }
}

#endif //MODIFICAR_SERVICIOS_C