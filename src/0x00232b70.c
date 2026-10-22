/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3A474F1CA7042F9D875384C1B4CBF4F8E6B3CEE2E8EC8A61B473EFE35D05CE3
 * Entry: 0x00232b70, Ghidra index: 7773, label: FUN_00232b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00232b70(char param_1)

{
  char cVar1;
  char *pcVar2;
  int *unaff_ESI;
  int unaff_retaddr;
  
  FUN_002ebea0();
  param_1 = '\0';
  FUN_00252ca0();
  if (unaff_retaddr + 1U < 0x2001) {
    (**(code **)(*unaff_ESI + 0x10))();
    (&param_1)[unaff_retaddr] = 0;
  }
  pcVar2 = &param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(&param_1,(int)pcVar2 - (int)&stack0x00000005);
  return;
}
