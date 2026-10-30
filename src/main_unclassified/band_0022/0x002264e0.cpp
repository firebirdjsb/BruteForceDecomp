/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD346EE248063EFA14B002D97C02039E6CD629BCB17F114C9CD1F15F0CFAC9BC
 * Entry: 0x002264e0, Ghidra index: 7646, label: FUN_002264e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003946a8;
extern uint32_t PTR_FUN_003946c8;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_LAB_003946b0;
extern uint32_t PTR_LAB_003946bc;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039efdc;
void FUN_002264e0(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  
  if (in_EAX != 0) {
    unaff_ESI[0x13] = DAT_003946a8;
    unaff_ESI[0x90] = PTR_FUN_0039efec;
    unaff_ESI[0x8f] = PTR_LAB_0039efdc;
    unaff_ESI[0x90] = PTR_FUN_0039efd0;
  }
  FUN_00156930();
  *unaff_ESI = &PTR_FUN_003946c8;
  unaff_ESI[0x12] = &PTR_FUN_0039adec;
  unaff_ESI[0x1a] = &PTR_LAB_0039a8c0;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x4c + (int)unaff_ESI) = &PTR_LAB_003946bc;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x50 + (int)unaff_ESI) = &PTR_LAB_003946b0;
  *(int *)(*(int *)(unaff_ESI[0x13] + 4) + 0x48 + (int)unaff_ESI) =
       *(int *)(unaff_ESI[0x13] + 4) + -0x1f0;
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6f] = 0;
  unaff_ESI[0x7b] = 0;
  unaff_ESI[0x80] = 0;
  *(byte *)(unaff_ESI + 0x88) = *(byte *)(unaff_ESI + 0x88) & 0x20 | 0x80;
  unaff_ESI[0x86] = 0;
  unaff_ESI[0x73] = 0x3f800000;
  unaff_ESI[0x76] = 0;
  unaff_ESI[0x75] = 0;
  unaff_ESI[0x79] = 0;
  unaff_ESI[0x78] = 0;
  unaff_ESI[0x7f] = 0;
  unaff_ESI[0x81] = 0;
  unaff_ESI[0x82] = 0x3f800000;
  unaff_ESI[0x8d] = 0;
  unaff_ESI[0x89] = 0;
  unaff_ESI[0x8a] = 0x3f800000;
  unaff_ESI[0x85] = 0;
  unaff_ESI[0x74] = 0;
  *(byte *)((int)unaff_ESI + 0x221) = *(byte *)((int)unaff_ESI + 0x221) & 0xfe;
  unaff_ESI[0x87] = 2;
  return;
}
