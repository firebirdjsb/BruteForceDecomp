/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4DC29393ED398A5313FE0CA6CD26874C9E8F357C8363CB51E91340B31051DC8
 * Entry: 0x002e3f90, Ghidra index: 10427, label: FUN_002e3f90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002e3f90(void)

{
  uint uVar1;
  float *in_ECX;
  bool bVar2;
  float local_10;
  float fStack_c;
  float local_8;
  int local_4;
  
  local_10 = in_ECX[6];
  fStack_c = in_ECX[7];
  if (*(char *)(in_ECX + 8) != '\0') {
    XAPILIB__QueryPerformanceCounter(&local_8);
    uVar1 = (int)local_8 - (int)in_ECX[4];
    bVar2 = CARRY4((uint)local_10,uVar1);
    local_10 = (float)((int)local_10 + uVar1);
    fStack_c = (float)((int)fStack_c +
                       ((local_4 - (int)in_ECX[5]) - (uint)((uint)local_8 < (uint)in_ECX[4])) +
                      (uint)bVar2);
  }
  return (float10)CONCAT44(fStack_c,local_10) * (float10)*in_ECX;
}
