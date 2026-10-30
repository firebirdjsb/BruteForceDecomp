/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89CF24D67911A9DEECA3873C751D868B3FA68D012B94B874B2A62D53D063B6B1
 * Entry: 0x00036230, Ghidra index: 356, label: FUN_00036230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00055a60(void);

void FUN_00036230(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 0x82c);
  *(undefined4 *)(unaff_ESI + 0x834) = *(undefined4 *)(iVar2 + 100);
  *(undefined4 *)(unaff_ESI + 0x838) = *(undefined4 *)(iVar2 + 0x68);
  *(undefined4 *)(unaff_ESI + 0x83c) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(unaff_ESI + 0x848) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(unaff_ESI + 0x84c) = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(unaff_ESI + 0x850) = *(undefined4 *)(iVar2 + 0x80);
  *(byte *)(unaff_ESI + 0x854) = *(byte *)(unaff_ESI + 0x854) & 0xfe;
  *(undefined4 *)(unaff_ESI + 0x88c) = 0;
  if (*(int *)(unaff_ESI + 0x42c) == 0) {
    FUN_00055a60(unaff_ESI + 0x41c);
  }
  uVar3 = (*(int *)(unaff_ESI + 0x428) + *(int *)(unaff_ESI + 0x42c)) - 1;
  if (*(uint *)(unaff_ESI + 0x424) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(unaff_ESI + 0x424);
  }
  puVar1 = (uint *)(*(int *)(*(int *)(unaff_ESI + 0x420) + uVar3 * 4) + 0x88);
  *puVar1 = *puVar1 | 0x4000;
                    /* WARNING: Could not recover jumptable at 0x000362cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(unaff_ESI + 0x40) + 0x408))();
  return;
}
