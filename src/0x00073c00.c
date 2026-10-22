/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D69D9C4C2988B2DBD1E0A731042B67B9A8E2C382CE88E102DE36696AAE664A09
 * Entry: 0x00073c00, Ghidra index: 1309, label: FUN_00073c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
void FUN_00073c00(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float10 fVar4;
  
  puVar1 = (undefined4 *)(in_ECX + 0x14);
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x24) = 0x3f800000;
  *puVar1 = 0x3f800000;
  fVar4 = (float10)FUN_00073d20(in_ECX);
  if ((float10)0.0 < fVar4) {
    fVar2 = (float)(fVar4 * (float10)0.025);
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    fVar3 = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * fVar2;
    FUN_00072010(puVar1,(fVar3 + fVar3) - fVar2);
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    fVar3 = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * fVar2;
    FUN_000720d0(puVar1,(fVar3 + fVar3) - fVar2);
    DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
    fVar3 = ((float)(DAT_0046cfd8 >> 9 | 0x3f800000) - 1.0) * fVar2;
    FUN_00073d80(puVar1,((fVar3 + fVar3) - fVar2) * 0.5);
    return;
  }
  return;
}
