// O HEADER dever� conter todos os includes que ser�o utilizados no projeto,
// tamb�m a declara��o de cada fun��o do projeto, para que as mesmas possam ser chamadas a partir do Main

// Bibliotecas
#include <iostream>
#include <opencv2\opencv.hpp>


// using namespace � um comando que serve para n�o precisarmos digitar esses nomes todas as vezes que chamarmos
// um m�todo existente na classe.
//`Por exemplo:
//   No modo padr�o para exibirmos uma imagem na tela dever�amos fazer da sequinte maneira: 
//     cv::imshow("Janela", imagem);
//  Ap�s o uso do using namespace:
//     imshow("Janela", imagem);
using namespace cv;
using namespace std;

// Declarando as Fun��es
// Para cada exerc�cio � sugerido que um arquivo novo .cpp seja criado
// e dentro desse arquivo a fun��o seja implementada. Entretanto o Main apenas
// reconhecer� as fun��es que forem declaradas aqui no cabe�alho.
void Exemplo_QuadradoVermelho();
void ManipulandoPixels();
void Degrade();
void InverterCor();
void EscalaMultipla();
void Threshould();
void Embacamento();
void Histograma();
void Subtracao();
void LinhaAnderson();
Mat TracarLinha(Mat img, int x1, int y1, int x2, int y2);
void TracarRetangulo();
int Positivar(int arg);