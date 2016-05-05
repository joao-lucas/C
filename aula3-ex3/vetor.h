int gerarAleatorios(int vet[]) {
    srand(time(NULL));
    //int vet[10];
    int i;
    for(i; i < 10; i++){
        vet[i] = rand()%50;
        //printf("Vetor: %d\n", vetor[i]);
    }
    return vet;

}

