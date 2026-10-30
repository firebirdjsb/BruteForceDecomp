/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6BDD989AC5ED76A64CE0CC403EAF64CF1A4356BB8B2DC240ADEC5F760254A5B
 * Entry: 0x000f4380, Ghidra index: 3062, label: FUN_000f4380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
extern char s_Parameters_004071bc[];
undefined4 FUN_000f4380(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int unaff_ESI;
  bool bVar7;
  char *pcVar8;
  undefined4 local_4;
  
  cVar4 = FUN_000f2d50((int *)(unaff_ESI + 4));
  if (cVar4 != '\0') {
    cVar4 = FUN_000f2d50((int *)(unaff_ESI + 8));
    if (cVar4 != '\0') {
      if (*(int *)(DAT_0046995c + 0x1c) != 0) {
        pcVar8 = s_Parameters_004071bc;
        FUN_002e5920(s_Parameters_004071bc);
        iVar5 = FUN_002e4a30(pcVar8);
        iVar1 = *(int *)(iVar5 + 0x214);
        iVar2 = *(int *)(unaff_ESI + 4);
        iVar3 = *(int *)(unaff_ESI + 8);
        bVar7 = *(int *)(iVar5 + 0x218) != iVar3;
        *(int *)(unaff_ESI + 0x22c) = iVar2;
        *(int *)(unaff_ESI + 0x230) = iVar3;
        if (iVar1 != iVar2) {
          if (bVar7) {
            local_4 = 0xf141d44f;
            FUN_000f42d0(unaff_ESI,&local_4);
            return 1;
          }
          local_4 = 0xf96b518e;
          FUN_000f42d0(unaff_ESI,&local_4);
          return 1;
        }
        if (bVar7) {
          local_4 = 0xf06c6118;
          FUN_000f42d0(unaff_ESI,&local_4);
          return 1;
        }
        FUN_000f42d0(unaff_ESI,&DAT_0046d064);
      }
      return 1;
    }
  }
  piVar6 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  local_4 = 0x1a12957e;
  (**(code **)(*piVar6 + 8))(&local_4,0,0);
  /* Original XBE 0x000f4498 MOV [ESP+0x0c],0xfd890279 and
   * 0x000f44a5 LEA EDX,[ESP+0x0c] address the same saved-ECX
   * word used at 0x000f4482 for the preceding virtual call. */
  local_4 = 0xfd890279;
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&local_4);
  return 0;
}
