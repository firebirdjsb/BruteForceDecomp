/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F877C6E6B7BF9AEF1820AA980F3173B0D027E9D0DD487D9D848C6063331A39D
 * Entry: 0x001659d0, Ghidra index: 4705, label: FUN_001659d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400534;
extern uint32_t DAT_0040c848;
extern uint32_t *DAT_00469908;
undefined1 FUN_001659d0(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined1 uVar4;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 local_124;
  undefined4 local_120;
  uint local_118;
  undefined4 local_108;
  uint local_104;
  undefined1 local_100 [256];
  
  local_104 = 0xf;
  local_108 = 0;
  local_118 = local_118 & 0xffffff00;
  pcVar1 = &DAT_0040c848;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_0040c848,pcVar2 + -0x40c848);
  FUN_001e8830(&DAT_00400534);
  if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_118);
  }
  local_124 = 0;
  uVar4 = 0;
  local_120 = 0;
  iVar3 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,local_100,0x80000000,&local_124);
  /* Original XBE 0x00165A4D LEA [ESP+0x10] supplies &local_124
   * as factory output, and 0x00165B0D reloads that word for release.
   * Guest pointers cannot be dereferenced natively without translation. */
  unaff_EDI = (int *)(uintptr_t)local_124;
  if (-1 < iVar3) {
    /* XBE 0x00165A76 LEA [ESP+0x14] passes &local_120.
     * At 0x00165A80 MOV ESI,[ESP+0x18] after PUSH EAX reloads
     * the SAME word, not a separate synthetic stack address.
     * Subsequent +0x8 virtual release consumes this output ESI. */
    iVar3 = FUN_001a3c80(&local_120);
    unaff_ESI = (int *)(uintptr_t)local_120;
    uVar4 = 0;
    if (-1 < iVar3) {
      iVar3 = FUN_0023a790(0x9c255b3,1);
      *(int *)(param_1 + 8) = iVar3;
      if (iVar3 != 0) {
        FUN_00165b40(iVar3,iVar3 + 0x8a60,((iVar3 + 0x8a60) - iVar3) / 0x520,unaff_EDI);
        iVar3 = 0;
        do {
          FUN_00163170();
          iVar3 = iVar3 + 0x520;
        } while (iVar3 < 0x8a60);
        uVar4 = 1;
      }
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
  }
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return uVar4;
}
