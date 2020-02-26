#ifndef PROTOHEADER
#define PROTOHEADER


// --- PROTO ---

// -- fopen & fclose
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
int fclose(FILE* pointeurSurFichier);

void dicoTablo();
char lireCaractere();


#endif // PROTOHEADER
