/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13EFE05141E812EB6982959F6FFD3892CF8ED05CAF8CAE44FBD2C943B5CC1B1D
 * Entry: 0x000f3040, Ghidra index: 3036, label: FUN_000f3040
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
extern char s_Parameters_004071bc[];
undefined4 FUN_000f3040(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcStack_10;
  undefined4 uStack_4;
  
  if (*(int *)(DAT_0046995c + 0x1c) == 0) {
    pcStack_10 = (char *)0xf312c;
    FUN_00084d50();
    return 1;
  }
  pcStack_10 = (char *)0xf3060;
  cVar2 = FUN_002e5880();
  if (cVar2 == '\0') {
    pcStack_10 = (char *)0x0;
    iVar3 = FUN_002e5bf0();
    if (*(int *)(iVar3 + 0x2c) != 0) {
      pcStack_10 = (char *)0xf311d;
      piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      uStack_4 = 0x643b18e;
      goto LAB_000f30dc;
    }
  }
  pcStack_10 = s_Parameters_004071bc;
  FUN_002e5920();
  iVar3 = FUN_002e4a30();
  uVar1 = *(uint *)(iVar3 + 0x21c);
  if (1 < ((uVar1 & 4) >> 2) + ((uVar1 & 2) >> 1) + 1 + (uVar1 & 1)) {
    pcStack_10 = DAT_0046995c;
    FUN_001ed8b0();
    return 1;
  }
  pcStack_10 = (char *)0xf30d4;
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  uStack_4 = 0x5cbcf16;
LAB_000f30dc:
  pcStack_10 = (char *)0x0;
  (**(code **)(*piVar4 + 8))(&uStack_4,0);
  pcStack_10 = (char *)0xfd890279;
  (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&pcStack_10);
  return 0;
}
