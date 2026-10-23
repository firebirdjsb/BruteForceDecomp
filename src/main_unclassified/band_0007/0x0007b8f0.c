/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBC5EC5E3DA785B79CC024981B18AB33C6B2423C96B156E8CABB734078286FFC
 * Entry: 0x0007b8f0, Ghidra index: 1469, label: FUN_0007b8f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040dcf4;
extern uint32_t *DAT_004432f8;
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_0007b8f0(void)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *******pppppppuVar7;
  undefined1 *unaff_EBX;
  undefined4 *******local_3c [3];
  uint uStack_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 uStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  undefined1 uStack_b;
  char cStack_4;
  
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = (undefined4 *******)((uint)local_3c[0] & 0xffffff00);
  pcVar1 = &DAT_0040dcf4;
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  FUN_0001fed0(&DAT_0040dcf4,pcVar4 + -0x40dcf4);
  FUN_000784c0(0);
  pppppppuVar7 = local_3c[0];
  if (local_28 < 0x10) {
    pppppppuVar7 = local_3c;
  }
  cVar2 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,pppppppuVar7);
  if (cVar2 == '\0') {
    if (cStack_4 != '\0') {
      cVar2 = FUN_00079080();
joined_r0x0007b9ce:
      if (cVar2 != '\0') {
        puVar6 = unaff_EBX;
        if (uStack_30 < 0x10) {
          puVar6 = &stack0xffffffbc;
        }
        uVar3 = FUN_0007b710(puVar6);
        goto LAB_0007ba2f;
      }
    }
  }
  else {
    puVar6 = unaff_EBX;
    if (uStack_30 < 0x10) {
      puVar6 = &stack0xffffffbc;
    }
    iVar5 = FUN_0023a280(puVar6);
    cVar2 = FUN_00079250();
    if (-1 < iVar5) goto joined_r0x0007b9ce;
  }
  uVar3 = 0;
  uStack_14 = 7;
  uStack_18 = 0;
  local_28 = local_28 & 0xffff0000;
  uStack_b = 0;
  uStack_10 = 0x45755d3;
  uStack_c = 1;
  FUN_000855a0();
  if (7 < uStack_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_28);
  }
LAB_0007ba2f:
  if (uStack_30 < 0x10) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_EBX);
}
