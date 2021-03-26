#include <windows.h>

int main()
{
   PlaySound(TEXT("play.wav"), NULL, SND_FILENAME);
}