void printf(char* str)
{ 
  unsigned short* VideoMemory = (unsigned short*)0xb8000;

  for(int i = 0; str[i] != '\0'; ++i)
  VideoMemory[i] = (VideoMemory[i] & 0xFF00) | str[i];
}

typedef void (*constructor)();
extern "C" constructor start_ctors;
extern "C" constructor end_ctors;
extern "C" void callConstructors()
{
  
}

extern "C" void kernel(void* multiboot_structure, unsigned int magicnumber)
{
  printf("Booting up");
  while(1);
}