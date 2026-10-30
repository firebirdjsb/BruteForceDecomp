/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA7847707F1E6537A3720DA3872AC2D721CC3A40ECDD5BAF78D539BF0D2DCB06
 * Entry: 0x00058c50, Ghidra index: 883, label: FUN_00058c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00058cf8) */

extern void FUN_0001bc90(int32_t unaff_EBX);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_00038320(void);

undefined4 FUN_00058c50(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0001bc90();
  if (*(int *)(param_2 + 8) != 0) {
    puVar1 = *(undefined4 **)(param_2 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)*puVar1;
    }
    if (puVar3 != puVar1) {
      do {
        iVar2 = puVar3[3];
        if ((iVar2 != 0) && ((**(code **)(*(int *)(iVar2 + 8) + 4))(), iVar2 != 0)) {
          FUN_0008f6a0(iVar2);
        }
        FUN_00038320();
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != *(undefined4 **)(param_2 + 4));
    }
  }
  return param_1;
}
