/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBC1FC2634C61F60F639264B097604564C9D59CB5D8041382E839A828C72BA65
 * Entry: 0x00351173, Ghidra index: 13060, label: FUN_00351173
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox x86 guest ABI_UNVERIFIED. */
extern void FUN_00350db4(char param_1,int param_2);
void FUN_00351173(void)

{
  char cVar1;
  byte bVar2;
  int in_ECX;
  
  cVar1 = *(char *)(in_ECX + 0x8c0);
  if (cVar1 == '\x02') {
    *(uint *)(in_ECX + 0xa70) = *(uint *)(in_ECX + 0xa70) | 0x80000800;
    bVar2 = 0;
  }
  else if (cVar1 == '\x03') {
    bVar2 = *(byte *)(in_ECX + 0x8c4) >> 6 & 1 | 4;
  }
  else if (cVar1 == '\a') {
    *(byte *)(in_ECX + 0x8c4) = *(byte *)(in_ECX + 0x8c4) & 0xef;
    *(undefined4 *)(in_ECX + 0x8e8) = 0;
    *(undefined4 *)(in_ECX + 0x928) = 0;
    bVar2 = 9;
  }
  else {
    if (cVar1 != '\v') {
      return;
    }
    *(int *)(in_ECX + 0xa74) = *(int *)(in_ECX + 0xa74) + -1;
    *(byte *)(in_ECX + 0xa73) = *(byte *)(in_ECX + 0xa73) | 0x20;
    bVar2 = 0xf;
  }
  FUN_00350db4(bVar2,0);
  return;
}
