/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99B24352AEFE021C665955D324EB4F3C97656EC5C76D51793934473351F638FC
 * Entry: 0x000c69d0, Ghidra index: 2443, label: FUN_000c69d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000bb360(void);
extern undefined4 FUN_000ba6d0(void);
extern void FUN_00155450(void);

extern uint32_t PTR_FUN_0039f2f8;
void FUN_000c69d0(void)

{
  undefined2 uVar1;
  undefined4 *in_EAX;
  
  FUN_000bb360();
  *in_EAX = &PTR_FUN_0039f2f8;
  in_EAX[0x1c] = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x11] = 0;
  in_EAX[0x18] = 0;
  in_EAX[0x17] = 0;
  in_EAX[0x16] = 0;
  in_EAX[0x15] = 0;
  in_EAX[0x10] = 0x3f800000;
  *(undefined1 *)(in_EAX + 0xb) = 0xff;
  *(undefined1 *)((int)in_EAX + 0x2d) = 0xff;
  *(undefined1 *)((int)in_EAX + 0x2e) = 0xff;
  *(undefined2 *)((int)in_EAX + 0xe) = 0x80;
  *(undefined2 *)(in_EAX + 3) = 0x80;
  FUN_000ba6d0();
  in_EAX[6] = 0x41a00000;
  in_EAX[0x19] = 0x44000000;
  in_EAX[0x1a] = 0x43000000;
  uVar1 = FUN_00155450();
  *(undefined2 *)(in_EAX + 0x1d) = uVar1;
  return;
}
