/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F30BBF19330D15E4353B1ED486A3FFDCF1B6DD391698D1F9EE5A1F790B1C38F
 * Entry: 0x002be8e0, Ghidra index: 9976, label: FUN_002be8e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e734;
extern uint32_t PTR_FUN_003bc650;
void FUN_002be8e0(void)

{
  uint in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  undefined4 *puVar3;
  
  unaff_ESI[2] = unaff_ESI[2] & 0xff000000;
  *unaff_ESI = &PTR_FUN_0038e734;
  unaff_ESI[1] = in_EAX - 1;
  *(undefined1 *)((int)unaff_ESI + 0xb) = 0;
  puVar1 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(in_EAX * 8);
  puVar3 = puVar1;
  for (iVar2 = (in_EAX & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  unaff_ESI[3] = puVar1;
  return;
}
