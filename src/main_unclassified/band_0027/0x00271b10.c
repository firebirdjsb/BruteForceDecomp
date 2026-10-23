/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F2CAB411D9432394C458349D32F896C5E5BBD0341FBE0B0ED80D7B559216779E
 * Entry: 0x00271b10, Ghidra index: 8820, label: FUN_00271b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392588;
void FUN_00271b10(void)

{
  undefined4 uVar1;
  undefined4 unaff_EBX;
  undefined4 *unaff_ESI;
  
  FUN_002710e0(unaff_ESI,unaff_EBX);
  *unaff_ESI = &PTR_FUN_00392588;
  uVar1 = FUN_00061500(unaff_ESI + 0x26);
  unaff_ESI[0x27] = uVar1;
  unaff_ESI[0x28] = 0;
  unaff_ESI[0x3e] = 0;
  unaff_ESI[0x3a] = 0x42700000;
  unaff_ESI[0x3b] = 0x3dcccccd;
  unaff_ESI[0x3c] = 0x47c35000;
  unaff_ESI[0x3d] = 0x3faaaaab;
  FUN_00271c20(unaff_EBX);
  FUN_00271f40(unaff_ESI + 0x3a);
  FUN_00271ea0(unaff_ESI + 0x12);
  FUN_00271ef0(unaff_ESI + 0x15);
  return;
}
