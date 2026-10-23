/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 847EAE28607EB7C99775244207885AD604700D8C5C29EC6FBE896563BD256D23
 * Entry: 0x00315ff9, Ghidra index: 12126, label: FUN_00315ff9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00315ff9(void)

{
  int *piVar1;
  int in_ECX;
  uint local_c;
  int local_8;
  
  FUN_003118f0();
  do {
    piVar1 = *(int **)(in_ECX + 0x6e0);
    if (piVar1 == (int *)(in_ECX + 0x6e0)) {
LAB_0031606e:
      FUN_00311923();
      return;
    }
    KeQuerySystemTime(&local_c);
    if ((local_8 < piVar1[7]) || ((local_8 <= piVar1[7] && (local_c < (uint)piVar1[6])))) {
      KeSetTimer(in_ECX + 0x720,piVar1[6],piVar1[7],in_ECX + 0x748);
      goto LAB_0031606e;
    }
    piVar1[2] = piVar1[2] & 0xfffffffd;
    FUN_003118c0(piVar1);
    (**(code **)(*(int *)piVar1[3] + 0x20))(piVar1[4],piVar1[5]);
  } while( true );
}
