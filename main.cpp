#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Renglon {
    char columna1[26];
    char columna2[14];
    char columna3[25];
    char columna4[25];
    char saltoDeLinea;
};

int main()
{
    FILE* arch1 = fopen("MESA_4568.txt","w+b");
    Renglon titulo;
    {
        Renglon auxiliar = {"Acta de la mesa \t", "4568 \t", "", "",'\n'};
        titulo = auxiliar;
    }
    Renglon subTitulo1 = {"Senadores \t","\t","\t","",'\n'};
    int dimCandidatosSenadores = 18;
    Renglon candidatosSenadores[dimCandidatosSenadores];
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Cristina Kirchner - \t","701",'\n'};
        candidatosSenadores[0] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Jorge Taiana - \t","501",'\n'};
        candidatosSenadores[1] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Florencio Randazzo - \t","504",'\n'};
        candidatosSenadores[2] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Sergio Massa - \t","502",'\n'};
        candidatosSenadores[3] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Margarita Stolbizer - \t","503",'\n'};
        candidatosSenadores[4] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Esteban Bullrich - \t","701",'\n'};
        candidatosSenadores[5] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Gladys Gonzales - \t","700",'\n'};
        candidatosSenadores[6] = auxiliar;
    }

    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Jose Sacheri - \t","699",'\n'};
        candidatosSenadores[7] = auxiliar;
    }
    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Martin Maure - \t","698",'\n'};
        candidatosSenadores[8] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Mariano Recalde - \t","702",'\n'};
        candidatosSenadores[9] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Nestor Pitrola - \t","702",'\n'};
        candidatosSenadores[10] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Andrea D'Atri - \t","702",'\n'};
        candidatosSenadores[11] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Dario Coria - \t","710",'\n'};
        candidatosSenadores[12] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Servando Ortiz - \t","710",'\n'};
        candidatosSenadores[13] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular -","Lista 509 - \t","Victor De Gennaro - \t","610",'\n'};
        candidatosSenadores[14] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular -","Lista 509 - \t","Lidia Braceras - \t","611",'\n'};
        candidatosSenadores[15] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Vilma Ripoll - \t","612",'\n'};
        candidatosSenadores[16] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Hector Heberling - \t","613",'\n'};
        candidatosSenadores[17] = auxiliar;
    }
    Renglon votosEnBlancoSenadores = {"Votos en Blanco \t\t\t\t","\t","\t","702",'\n'};
    Renglon votosImpugnadosSenadores = {"Votos impugnados \t\t\t\t","\t","\t","703",'\n'};
    Renglon separador = {"------------------------","-------------","\t","\t",'\n'};
    Renglon subTitulo2 = {"Diputados \t","\t","\t","",'\n'};
    int dimCandidatosDiputados = 12;
    Renglon candidatosDiputados[dimCandidatosDiputados];
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Fernanda Vallejos - \t","705",'\n'};
        candidatosDiputados[0] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Eduardo Bali Bucca - \t","405",'\n'};
        candidatosDiputados[1] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Oscar Romero - \t","476",'\n'};
        candidatosDiputados[2] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Felipe Sola - \t","205",'\n'};
        candidatosDiputados[3] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Graciela Ocana - \t","13823",'\n'};
        candidatosDiputados[4] = auxiliar;
    }
    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Jovina Luna - \t","599",'\n'};
        candidatosDiputados[5] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Daniel Filmus - \t","708",'\n'};
        candidatosDiputados[6] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Gabriela Cerruti - \t","712",'\n'};
        candidatosDiputados[7] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Nicolas del Cano - \t","702",'\n'};
        candidatosDiputados[8] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Alejandro Biondini - \t","711",'\n'};
        candidatosDiputados[9] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular","Lista 509 - \t","Gabriela Troiano - \t","611",'\n'};
        candidatosDiputados[10] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Alejandro Bodart - \t","613",'\n'};
        candidatosDiputados[11] = auxiliar;
    }
    Renglon votosEnBlancoDiputados = {"Votos en Blanco \t\t\t\t","\t","\t","602",'\n'};
    Renglon votosImpugnadosDiputados = {"Votos impugnados \t\t\t\t","\t","\t","603",'\n'};
    if (arch1){
        fwrite(&titulo, sizeof(Renglon),1,arch1);
        fwrite(&subTitulo1, sizeof(Renglon),1,arch1);
        for(int i = 0; i < dimCandidatosSenadores; ++i ){
            fwrite(&candidatosSenadores[i], sizeof(Renglon),1,arch1);
        }
        fwrite(&votosEnBlancoSenadores, sizeof(Renglon),1,arch1);
        fwrite(&votosImpugnadosSenadores, sizeof(Renglon),1,arch1);
        fwrite(&separador,sizeof(Renglon),1,arch1);
        fwrite(&subTitulo2, sizeof(Renglon),1,arch1);
        for(int i = 0; i < dimCandidatosDiputados; ++i ){
            fwrite(&candidatosDiputados[i], sizeof(Renglon),1,arch1);
        }
        fwrite(&votosEnBlancoDiputados, sizeof(Renglon),1,arch1);
        fwrite(&votosImpugnadosDiputados, sizeof(Renglon),1,arch1);
    }
    fclose(arch1);

    FILE* arch2 = fopen("MESA_4569.txt","w+b");
    {
        Renglon auxiliar = {"Acta de la mesa \t", "4569 \t", "", "",'\n'};
        titulo = auxiliar;
    }
    //senadores
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Cristina Kirchner - \t","721",'\n'};
        candidatosSenadores[0] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Jorge Taiana - \t","521",'\n'};
        candidatosSenadores[1] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Florencio Randazzo - \t","524",'\n'};
        candidatosSenadores[2] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Sergio Massa - \t","522",'\n'};
        candidatosSenadores[3] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Margarita Stolbizer - \t","523",'\n'};
        candidatosSenadores[4] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Esteban Bullrich - \t","721",'\n'};
        candidatosSenadores[5] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Gladys Gonzales - \t","720",'\n'};
        candidatosSenadores[6] = auxiliar;
    }

    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Jose Sacheri - \t","629",'\n'};
        candidatosSenadores[7] = auxiliar;
    }
    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Martin Maure - \t","628",'\n'};
        candidatosSenadores[8] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Mariano Recalde - \t","722",'\n'};
        candidatosSenadores[9] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Nestor Pitrola - \t","722",'\n'};
        candidatosSenadores[10] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Andrea D'Atri - \t","722",'\n'};
        candidatosSenadores[11] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Dario Coria - \t","720",'\n'};
        candidatosSenadores[12] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Servando Ortiz - \t","720",'\n'};
        candidatosSenadores[13] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular -","Lista 509 - \t","Victor De Gennaro - \t","620",'\n'};
        candidatosSenadores[14] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular -","Lista 509 - \t","Lidia Braceras - \t","621",'\n'};
        candidatosSenadores[15] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Vilma Ripoll - \t","622",'\n'};
        candidatosSenadores[16] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Hector Heberling - \t","623",'\n'};
        candidatosSenadores[17] = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos en Blanco \t\t\t\t","\t","\t","722",'\n'};
        votosEnBlancoSenadores = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos impugnados \t\t\t\t","\t","\t","723",'\n'};
        votosImpugnadosSenadores = auxiliar;
    }
    //diputados
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Fernanda Vallejos - \t","725",'\n'};
        candidatosDiputados[0] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Eduardo Bali Bucca - \t","425",'\n'};
        candidatosDiputados[1] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Oscar Romero - \t","426",'\n'};
        candidatosDiputados[2] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Felipe Sola - \t","225",'\n'};
        candidatosDiputados[3] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Graciela Ocana - \t","729",'\n'};
        candidatosDiputados[4] = auxiliar;
    }
    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Jovina Luna - \t","529",'\n'};
        candidatosDiputados[5] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Daniel Filmus - \t","728",'\n'};
        candidatosDiputados[6] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Gabriela Cerruti - \t","722",'\n'};
        candidatosDiputados[7] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Nicolas del Cano - \t","722",'\n'};
        candidatosDiputados[8] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Alejandro Biondini - \t","721",'\n'};
        candidatosDiputados[9] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular","Lista 509 - \t","Gabriela Troiano - \t","621",'\n'};
        candidatosDiputados[10] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Alejandro Bodart - \t","623",'\n'};
        candidatosDiputados[11] = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos en Blanco \t\t\t\t","\t","\t","622",'\n'};
        votosEnBlancoDiputados = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos impugnados \t\t\t\t","\t","\t","623",'\n'};
        votosImpugnadosDiputados = auxiliar;
    }
    if (arch2){
        fwrite(&titulo, sizeof(Renglon),1,arch2);
        fwrite(&subTitulo1, sizeof(Renglon),1,arch2);
        for(int i = 0; i < dimCandidatosSenadores; ++i ){
            fwrite(&candidatosSenadores[i], sizeof(Renglon),1,arch2);
        }
        fwrite(&votosEnBlancoSenadores, sizeof(Renglon),1,arch2);
        fwrite(&votosImpugnadosSenadores, sizeof(Renglon),1,arch2);
        fwrite(&separador,sizeof(Renglon),1,arch2);
        fwrite(&subTitulo2, sizeof(Renglon),1,arch2);
        for(int i = 0; i < dimCandidatosDiputados; ++i ){
            fwrite(&candidatosDiputados[i], sizeof(Renglon),1,arch2);
        }
        fwrite(&votosEnBlancoDiputados, sizeof(Renglon),1,arch2);
        fwrite(&votosImpugnadosDiputados, sizeof(Renglon),1,arch2);
    }
    fclose(arch2);


    FILE* arch3 = fopen("MESA_4579.txt","w+b");
    {
        Renglon auxiliar = {"Acta de la mesa \t", "4579 \t", "", "",'\n'};
        titulo = auxiliar;
    }
    //senadores
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Cristina Kirchner - \t","731",'\n'};
        candidatosSenadores[0] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Jorge Taiana - \t","531",'\n'};
        candidatosSenadores[1] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Florencio Randazzo - \t","534",'\n'};
        candidatosSenadores[2] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Sergio Massa - \t","532",'\n'};
        candidatosSenadores[3] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Margarita Stolbizer - \t","533",'\n'};
        candidatosSenadores[4] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Esteban Bullrich - \t","731",'\n'};
        candidatosSenadores[5] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Gladys Gonzales - \t","730",'\n'};
        candidatosSenadores[6] = auxiliar;
    }

    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Jose Sacheri - \t","639",'\n'};
        candidatosSenadores[7] = auxiliar;
    }
    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Martin Maure - \t","638",'\n'};
        candidatosSenadores[8] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Mariano Recalde - \t","732",'\n'};
        candidatosSenadores[9] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Nestor Pitrola - \t","732",'\n'};
        candidatosSenadores[10] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Andrea D'Atri - \t","732",'\n'};
        candidatosSenadores[11] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Dario Coria - \t","730",'\n'};
        candidatosSenadores[12] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Servando Ortiz - \t","730",'\n'};
        candidatosSenadores[13] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular -","Lista 509 - \t","Victor De Gennaro - \t","630",'\n'};
        candidatosSenadores[14] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular -","Lista 509 - \t","Lidia Braceras - \t","631",'\n'};
        candidatosSenadores[15] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Vilma Ripoll - \t","632",'\n'};
        candidatosSenadores[16] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Hector Heberling - \t","633",'\n'};
        candidatosSenadores[17] = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos en Blanco \t\t\t\t","\t","\t","732",'\n'};
        votosEnBlancoSenadores = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos impugnados \t\t\t\t","\t","\t","733",'\n'};
        votosImpugnadosSenadores = auxiliar;
    }
    //diputados
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Fernanda Vallejos - \t","735",'\n'};
        candidatosDiputados[0] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Eduardo Bali Bucca - \t","435",'\n'};
        candidatosDiputados[1] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Oscar Romero - \t","436",'\n'};
        candidatosDiputados[2] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Felipe Sola - \t","235",'\n'};
        candidatosDiputados[3] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Graciela Ocana - \t","739",'\n'};
        candidatosDiputados[4] = auxiliar;
    }
    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Jovina Luna - \t","539",'\n'};
        candidatosDiputados[5] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Daniel Filmus - \t","738",'\n'};
        candidatosDiputados[6] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Gabriela Cerruti - \t","732",'\n'};
        candidatosDiputados[7] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Nicolas del Cano - \t","732",'\n'};
        candidatosDiputados[8] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Alejandro Biondini - \t","731",'\n'};
        candidatosDiputados[9] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular","Lista 509 - \t","Gabriela Troiano - \t","631",'\n'};
        candidatosDiputados[10] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Alejandro Bodart - \t","633",'\n'};
        candidatosDiputados[11] = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos en Blanco \t\t\t\t","\t","\t","632",'\n'};
        votosEnBlancoDiputados = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos impugnados \t\t\t\t","\t","\t","633",'\n'};
        votosImpugnadosDiputados = auxiliar;
    }
    if (arch3){
        fwrite(&titulo, sizeof(Renglon),1,arch3);
        fwrite(&subTitulo1, sizeof(Renglon),1,arch3);
        for(int i = 0; i < dimCandidatosSenadores; ++i ){
            fwrite(&candidatosSenadores[i], sizeof(Renglon),1,arch3);
        }
        fwrite(&votosEnBlancoSenadores, sizeof(Renglon),1,arch3);
        fwrite(&votosImpugnadosSenadores, sizeof(Renglon),1,arch3);
        fwrite(&separador,sizeof(Renglon),1,arch3);
        fwrite(&subTitulo2, sizeof(Renglon),1,arch3);
        for(int i = 0; i < dimCandidatosDiputados; ++i ){
            fwrite(&candidatosDiputados[i], sizeof(Renglon),1,arch3);
        }
        fwrite(&votosEnBlancoDiputados, sizeof(Renglon),1,arch3);
        fwrite(&votosImpugnadosDiputados, sizeof(Renglon),1,arch3);
    }
    fclose(arch3);

        FILE* arch4 = fopen("MESA_4580.txt","w+b");
    {
        Renglon auxiliar = {"Acta de la mesa \t", "4580 \t", "", "",'\n'};
        titulo = auxiliar;
    }
    //senadores
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Cristina Kirchner - \t","741",'\n'};
        candidatosSenadores[0] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Jorge Taiana - \t","541",'\n'};
        candidatosSenadores[1] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Florencio Randazzo - \t","544",'\n'};
        candidatosSenadores[2] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Sergio Massa - \t","542",'\n'};
        candidatosSenadores[3] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Margarita Stolbizer - \t","543",'\n'};
        candidatosSenadores[4] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Esteban Bullrich - \t","741",'\n'};
        candidatosSenadores[5] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Gladys Gonzales - \t","740",'\n'};
        candidatosSenadores[6] = auxiliar;
    }

    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Jose Sacheri - \t","649",'\n'};
        candidatosSenadores[7] = auxiliar;
    }
    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Martin Maure - \t","648",'\n'};
        candidatosSenadores[8] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Mariano Recalde - \t","742",'\n'};
        candidatosSenadores[9] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Nestor Pitrola - \t","742",'\n'};
        candidatosSenadores[10] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Andrea D'Atri - \t","742",'\n'};
        candidatosSenadores[11] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Dario Coria - \t","740",'\n'};
        candidatosSenadores[12] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Servando Ortiz - \t","740",'\n'};
        candidatosSenadores[13] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular -","Lista 509 - \t","Victor De Gennaro - \t","640",'\n'};
        candidatosSenadores[14] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular -","Lista 509 - \t","Lidia Braceras - \t","641",'\n'};
        candidatosSenadores[15] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Vilma Ripoll - \t","642",'\n'};
        candidatosSenadores[16] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Hector Heberling - \t","643",'\n'};
        candidatosSenadores[17] = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos en Blanco \t\t\t\t","\t","\t","742",'\n'};
        votosEnBlancoSenadores = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos impugnados \t\t\t\t","\t","\t","743",'\n'};
        votosImpugnadosSenadores = auxiliar;
    }
    //diputados
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Fernanda Vallejos - \t","745",'\n'};
        candidatosDiputados[0] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Eduardo Bali Bucca - \t","445",'\n'};
        candidatosDiputados[1] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Oscar Romero - \t","446",'\n'};
        candidatosDiputados[2] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Felipe Sola - \t","245",'\n'};
        candidatosDiputados[3] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Graciela Ocana - \t","749",'\n'};
        candidatosDiputados[4] = auxiliar;
    }
    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Jovina Luna - \t","549",'\n'};
        candidatosDiputados[5] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Daniel Filmus - \t","748",'\n'};
        candidatosDiputados[6] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Gabriela Cerruti - \t","742",'\n'};
        candidatosDiputados[7] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Nicolas del Cano - \t","742",'\n'};
        candidatosDiputados[8] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Alejandro Biondini - \t","741",'\n'};
        candidatosDiputados[9] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular","Lista 509 - \t","Gabriela Troiano - \t","641",'\n'};
        candidatosDiputados[10] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Alejandro Bodart - \t","643",'\n'};
        candidatosDiputados[11] = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos en Blanco \t\t\t\t","\t","\t","642",'\n'};
        votosEnBlancoDiputados = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos impugnados \t\t\t\t","\t","\t","643",'\n'};
        votosImpugnadosDiputados = auxiliar;
    }
    if (arch4){
        fwrite(&titulo, sizeof(Renglon),1,arch4);
        fwrite(&subTitulo1, sizeof(Renglon),1,arch4);
        for(int i = 0; i < dimCandidatosSenadores; ++i ){
            fwrite(&candidatosSenadores[i], sizeof(Renglon),1,arch4);
        }
        fwrite(&votosEnBlancoSenadores, sizeof(Renglon),1,arch4);
        fwrite(&votosImpugnadosSenadores, sizeof(Renglon),1,arch4);
        fwrite(&separador,sizeof(Renglon),1,arch4);
        fwrite(&subTitulo2, sizeof(Renglon),1,arch4);
        for(int i = 0; i < dimCandidatosDiputados; ++i ){
            fwrite(&candidatosDiputados[i], sizeof(Renglon),1,arch4);
        }
        fwrite(&votosEnBlancoDiputados, sizeof(Renglon),1,arch4);
        fwrite(&votosImpugnadosDiputados, sizeof(Renglon),1,arch4);
    }
    fclose(arch4);

        FILE* arch5 = fopen("MESA_4581.txt","w+b");
    {
        Renglon auxiliar = {"Acta de la mesa \t", "4581 \t", "", "",'\n'};
        titulo = auxiliar;
    }
    //senadores
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Cristina Kirchner - \t","751",'\n'};
        candidatosSenadores[0] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Jorge Taiana - \t","551",'\n'};
        candidatosSenadores[1] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Florencio Randazzo - \t","554",'\n'};
        candidatosSenadores[2] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Sergio Massa - \t","552",'\n'};
        candidatosSenadores[3] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Margarita Stolbizer - \t","553",'\n'};
        candidatosSenadores[4] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Esteban Bullrich - \t","751",'\n'};
        candidatosSenadores[5] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Gladys Gonzales - \t","750",'\n'};
        candidatosSenadores[6] = auxiliar;
    }

    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Jose Sacheri - \t","659",'\n'};
        candidatosSenadores[7] = auxiliar;
    }
    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Martin Maure - \t","658",'\n'};
        candidatosSenadores[8] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Mariano Recalde - \t","752",'\n'};
        candidatosSenadores[9] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Nestor Pitrola - \t","752",'\n'};
        candidatosSenadores[10] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Andrea D'Atri - \t","752",'\n'};
        candidatosSenadores[11] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Dario Coria - \t","750",'\n'};
        candidatosSenadores[12] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Servando Ortiz - \t","750",'\n'};
        candidatosSenadores[13] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular -","Lista 509 - \t","Victor De Gennaro - \t","650",'\n'};
        candidatosSenadores[14] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular -","Lista 509 - \t","Lidia Braceras - \t","651",'\n'};
        candidatosSenadores[15] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Vilma Ripoll - \t","652",'\n'};
        candidatosSenadores[16] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Hector Heberling - \t","653",'\n'};
        candidatosSenadores[17] = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos en Blanco \t\t\t\t","\t","\t","752",'\n'};
        votosEnBlancoSenadores = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos impugnados \t\t\t\t","\t","\t","753",'\n'};
        votosImpugnadosSenadores = auxiliar;
    }
    //diputados
    {
        Renglon auxiliar = {"Unidad Ciudadana - \t","Lista 502 - \t","Fernanda Vallejos - \t","755",'\n'};
        candidatosDiputados[0] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Eduardo Bali Bucca - \t","455",'\n'};
        candidatosDiputados[1] = auxiliar;
    }
    {
        Renglon auxiliar = {"Partido Justicialista - ","Lista 504 - \t","Oscar Romero - \t","456",'\n'};
        candidatosDiputados[2] = auxiliar;
    }
    {
        Renglon auxiliar = {"Un Pais - \t","Lista 503 - \t","Felipe Sola - \t","255",'\n'};
        candidatosDiputados[3] = auxiliar;
    }
    {
        Renglon auxiliar = {"Cambiemos - \t\t","Lista 505 - \t","Graciela Ocana - \t","759",'\n'};
        candidatosDiputados[4] = auxiliar;
    }
    {
        Renglon auxiliar = {"Todos por Buenos Aires -","Lista 501 - \t","Jovina Luna - \t","559",'\n'};
        candidatosDiputados[5] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Daniel Filmus - \t","758",'\n'};
        candidatosDiputados[6] = auxiliar;
    }
    {
        Renglon auxiliar = {"Unidad Portena - \t","Lista 506 - \t","Gabriela Cerruti - \t","752",'\n'};
        candidatosDiputados[7] = auxiliar;
    }
    {
        Renglon auxiliar = {"FIT - \t","Lista 508 - \t","Nicolas del Cano - \t","752",'\n'};
        candidatosDiputados[8] = auxiliar;
    }
    {
        Renglon auxiliar = {"Bandera Vecinal - \t","Lista 507 - \t","Alejandro Biondini - \t","751",'\n'};
        candidatosDiputados[9] = auxiliar;
    }
    {
        Renglon auxiliar = {"Frente Social y Popular","Lista 509 - \t","Gabriela Troiano - \t","651",'\n'};
        candidatosDiputados[10] = auxiliar;
    }
    {
        Renglon auxiliar = {"Izquierda al Frente - \t","Lista 510 - \t","Alejandro Bodart - \t","653",'\n'};
        candidatosDiputados[11] = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos en Blanco \t\t\t\t","\t","\t","652",'\n'};
        votosEnBlancoDiputados = auxiliar;
    }
    {
        Renglon auxiliar = {"Votos impugnados \t\t\t\t","\t","\t","653",'\n'};
        votosImpugnadosDiputados = auxiliar;
    }
    if (arch5){
        fwrite(&titulo, sizeof(Renglon),1,arch5);
        fwrite(&subTitulo1, sizeof(Renglon),1,arch5);
        for(int i = 0; i < dimCandidatosSenadores; ++i ){
            fwrite(&candidatosSenadores[i], sizeof(Renglon),1,arch5);
        }
        fwrite(&votosEnBlancoSenadores, sizeof(Renglon),1,arch5);
        fwrite(&votosImpugnadosSenadores, sizeof(Renglon),1,arch5);
        fwrite(&separador,sizeof(Renglon),1,arch5);
        fwrite(&subTitulo2, sizeof(Renglon),1,arch5);
        for(int i = 0; i < dimCandidatosDiputados; ++i ){
            fwrite(&candidatosDiputados[i], sizeof(Renglon),1,arch5);
        }
        fwrite(&votosEnBlancoDiputados, sizeof(Renglon),1,arch5);
        fwrite(&votosImpugnadosDiputados, sizeof(Renglon),1,arch5);
    }
    fclose(arch5);


    return 0;
}
