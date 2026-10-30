/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 646A1A927042018BC5EB75CE1356F1861B55043238AB22EAE7AF7BE8D8CE2E2F
 * Entry: 0x00222480, Ghidra index: 7581, label: FUN_00222480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039efc0;
uint FUN_00222480(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int *unaff_EBX;
  undefined4 *unaff_ESI;
  float fStack_d4;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined **local_90 [2];
  int iStack_88;
  float fStack_44;
  undefined4 local_40;
  undefined4 local_30;
  float fStack_24;
  
  uVar1 = FUN_00236670(0,&local_c8,unaff_ESI);
  if ((char)uVar1 != '\0') {
    puVar2 = (undefined4 *)FUN_00039510();
    local_bc = puVar2[2];
    local_c4 = *puVar2;
    unaff_ESI[1] = puVar2[1];
    local_c0 = local_c8 + (float)unaff_ESI[1];
    unaff_ESI[2] = local_bc;
    *unaff_ESI = local_c4;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0xbf800000;
    local_ac = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_a4 = local_c8 + local_c8;
    FUN_002b7970(local_90,&local_c4);
    local_90[0] = &PTR_LAB_0039efc0;
    local_30 = 0;
    local_40 = 0x60ad78ec;
    uVar1 = (**(code **)(*unaff_EBX + 0x108))(local_90);
    if (iStack_88 != 0) {
      uVar3 = (undefined2)(uVar1 >> 0x10);
      uVar1 = CONCAT22(uVar3,(ushort)(fStack_44 < 1e+20) << 8 | (ushort)isnan(fStack_44) << 10 |
                             (ushort)(fStack_44 == 1e+20) << 0xe);
      if (fStack_44 != 1e+20) {
        uVar1 = CONCAT22(uVar3,(ushort)(fStack_24 < fStack_d4) << 8 |
                               (ushort)(isnan(fStack_24) || isnan(fStack_d4)) << 10 |
                               (ushort)(fStack_24 == fStack_d4) << 0xe);
        if (fStack_24 < fStack_d4) {
          unaff_ESI[1] = (local_c8 + local_c8) - fStack_24;
          return CONCAT31((int3)(uVar1 >> 8),1);
        }
      }
    }
  }
  return uVar1 & 0xffffff00;
}
