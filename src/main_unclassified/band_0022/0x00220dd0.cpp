/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 314832C95B303D0FF84E84871BC91E7403082B8C832660661136324EC34FE3B1
 * Entry: 0x00220dd0, Ghidra index: 7561, label: FUN_00220dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00220dd0(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  uint32_t guest_first_output_word; /* first Xbox stack output: ESP+8 */
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  if ((in_EAX != 0) && (piVar1 = *(int **)(in_EAX + 4), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
    if (iVar2 != 0) {
      D3D8LTCG__D3D_BlockOnResource_0();
      FUN_00373f00(iVar2,0,0,&guest_first_output_word,auStack_8,auStack_c,auStack_10,auStack_14);
      /* MOV EAX,[ESP+8] at 0x00220E14 returns the same out-word. */
      return guest_first_output_word;
    }
  }
  return 0;
}
