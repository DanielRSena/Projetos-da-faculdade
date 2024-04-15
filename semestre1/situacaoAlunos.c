#include <Stdio.h>

int main() {

	int cont, alunos;
	float aulas;

	printf("\n\t\t- Situacoes dos alunos -\n");
	do { 
        printf("\n	Quantos serao os alunos analisados? "); 
        scanf("%i", &alunos); 
    } while (alunos <= 0);

	do { 
        printf("\n	Quantas aulas foram dadas durante o intervalo? "); 
        scanf("%f", &aulas); 
    } while (aulas < 1);

	for (cont = 0; cont < alunos; cont = cont + 1) {

	    float n1 = 0, n2 = 0, m = 0, p = 0;
		do { 
            printf("\n\t----------------\n\n\t\tAluno %i\n\n\tAulas presentes: ", cont); 
            scanf("%f", &p); 
        } while (p < 0 || p > aulas);

		p = p / aulas * 100;

		if (p < 75) printf("\n\tFrequencia: %.0f%% (reprovado)\n\n", p);
		else {
			do { 
                printf("\n	Primeira nota: "); scanf("%f", &n1); 
            } while (n1 < 0 || n1 > 10);
			do { 
                printf("\n	Segunda nota: "); scanf("%f", &n2); 
            } while (n1 < 0 || n1 > 10);
			m = (n1 + n2) / 2;
			if (m >= 6) printf("\n	Media: %.2f\n\tFrequencia: %.0f%%\n\n\t\t(aprovado)\n\n", m, p);
			else if (m >= 3) printf("\n	Media: %.2f\n\tFrequencia: %.0f%%\n\n\t\t(exame)\n\n", m, p);
			else printf("\n	Media: %.0f\n\tFrequencia: %.2f%%\n\n\t\t(reprovado)\n\n", m, p);
		}
	}
}