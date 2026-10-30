/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0AA166606CFEBEA9C3B291F8FD3C92028DFD0B703EC36B17791B1A6E4F447EB0
 * Entry: 0x00086260, Ghidra index: 1577, label: FUN_00086260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x000862c8) */

extern void FUN_0001fed0(undefined4 *param_1,uint param_2);
extern void FUN_000784c0(uint param_1);
extern void FUN_0001f4f0(int param_1,uint param_2,uint param_3);

void FUN_00086260(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *in_ECX;
  int unaff_ESI;
  
  pcVar2 = in_ECX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(in_ECX,(int)pcVar2 - (int)(in_ECX + 1));
  uVar3 = FUN_000784c0(0);
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  FUN_0001f4f0(uVar3,0,0xffffffff);
  return;
}
