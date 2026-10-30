/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27B4A844BC709477890BD03B8C4F732DC8FA51EF2425D1F89EB244B513D7B76D
 * Entry: 0x000b4010, Ghidra index: 2173, label: FUN_000b4010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_000ba6d0(void);

extern uint32_t PTR_FUN_0039feec;
void FUN_000b4010(void)

{
  undefined4 *in_EAX;
  
  FUN_000ba5b0(in_EAX);
  *(undefined1 *)(in_EAX + 0xb) = 0xff;
  *(undefined1 *)((int)in_EAX + 0x2d) = 0xff;
  *(undefined1 *)((int)in_EAX + 0x2e) = 0xff;
  *in_EAX = &PTR_FUN_0039feec;
  in_EAX[0xc] = 0;
  *(undefined2 *)((int)in_EAX + 0xe) = 0x100;
  *(undefined2 *)(in_EAX + 3) = 0x80;
  in_EAX[0xd] = 0x41400000;
  *(byte *)((int)in_EAX + 0x13) = *(byte *)((int)in_EAX + 0x13) | 1;
  in_EAX[0xf] = 0;
  in_EAX[0xe] = 0x41400000;
  FUN_000ba6d0();
  return;
}
