/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07591D2898C5BEEA5498D9D7460692F5B7F47B531A002B69586D37CD2EBDD34E
 * Entry: 0x002229b0, Ghidra index: 7588, label: FUN_002229b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
float10 FUN_002229b0(void)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *unaff_ESI;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [36];
  
  fVar6 = (float10)FUN_000c4e10(in_EAX);
  fVar7 = fVar6 * (float10)0.017444;
  fVar1 = (float)fVar7;
  fVar2 = (float)(fVar7 + fVar7);
  uVar3 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  uVar4 = uVar3 * 0x19660d + 0x3c6ef35f;
  DAT_0046cfd8 = uVar4 * 0x19660d + 0x3c6ef35f;
  uVar5 = DAT_0046cfd8 >> 9;
  FUN_0013e800(local_24,((float)(uVar3 >> 9 | 0x3f800000) - 1.0) * fVar2 - fVar1);
  FUN_0001fa20(local_24,((float)(uVar4 >> 9 | 0x3f800000) - 1.0) * fVar2 - fVar1);
  FUN_0016b210(local_24,((float)(uVar5 | 0x3f800000) - 1.0) * fVar2 - fVar1);
  FUN_0001f9c0();
  *unaff_ESI = local_30;
  unaff_ESI[1] = local_2c;
  unaff_ESI[2] = local_28;
  return (float10)(float)fVar6;
}
