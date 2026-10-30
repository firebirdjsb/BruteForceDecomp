/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 734408F3CA026153A41C03BB5D7B08EDB61ADFB8DF598318D13A425432FB8BCC
 * Entry: 0x00220e70, Ghidra index: 7563, label: FUN_00220e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003948ec;
extern uint32_t PTR_FUN_00394908;
extern uint32_t PTR_FUN_00394918;
extern uint32_t PTR_FUN_0039adec;
extern uint32_t PTR_FUN_0039efd0;
extern uint32_t PTR_FUN_0039efec;
extern uint32_t PTR_FUN_003a1a68;
extern uint32_t PTR_LAB_003948f4;
extern uint32_t PTR_LAB_00394900;
extern uint32_t PTR_LAB_0039a8c0;
extern uint32_t PTR_LAB_0039efdc;
void FUN_00220e70(void)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  if (in_EAX != 0) {
    unaff_ESI[0x13] = DAT_003948ec;
    unaff_ESI[0x7b] = PTR_FUN_0039efec;
    unaff_ESI[0x7a] = PTR_LAB_0039efdc;
    unaff_ESI[0x7b] = PTR_FUN_0039efd0;
  }
  FUN_00156930();
  unaff_ESI[0x6c] = &PTR_FUN_003a1a68;
  *unaff_ESI = &PTR_FUN_00394918;
  unaff_ESI[0x12] = &PTR_FUN_0039adec;
  unaff_ESI[0x1a] = &PTR_LAB_0039a8c0;
  unaff_ESI[0x6c] = &PTR_FUN_00394908;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x4c + (int)unaff_ESI) = &PTR_LAB_00394900;
  *(undefined ***)(*(int *)(unaff_ESI[0x13] + 4) + 0x50 + (int)unaff_ESI) = &PTR_LAB_003948f4;
  *(int *)(*(int *)(unaff_ESI[0x13] + 4) + 0x48 + (int)unaff_ESI) =
       *(int *)(unaff_ESI[0x13] + 4) + -0x19c;
  unaff_ESI[0x6d] = 0;
  uVar1 = FUN_0010c0b0(unaff_ESI + 0x6e);
  unaff_ESI[0x6f] = uVar1;
  unaff_ESI[0x70] = 0;
  uVar1 = FUN_001fadb0(unaff_ESI + 0x71);
  unaff_ESI[0x72] = uVar1;
  unaff_ESI[0x73] = 0;
  uVar1 = FUN_00061500(unaff_ESI + 0x74);
  unaff_ESI[0x75] = uVar1;
  unaff_ESI[0x76] = 0;
  *(byte *)((int)unaff_ESI + 0x71) = *(byte *)((int)unaff_ESI + 0x71) & 0xf3;
  *(undefined1 *)(unaff_ESI + 0x77) = 0;
  unaff_ESI[0x11] = 2;
  unaff_ESI[0x78] = 3;
  return;
}
