/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD000346FCE7B4B54E10A72DBEAC462BCA2790D6D2625245DE9C84078397FC72
 * Entry: 0x0038624a, Ghidra index: 13692, label: FUN_0038624a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing callee draft declaration only; Xbox ABI_UNVERIFIED.
 * Original caller consumes hidden ECX/EDX and preserves ECX for this
 * callee, which saves it in ESI. The unchanged zero-argument source
 * call omits that binding; in_ECX/in_EDX remain unbound. Downstream
 * interfaces remain unresolved. These mismatches remain; no guest
 * pointer/ABI bridge is added. Do not execute this caller as game code. */
extern void FUN_0038618e(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint16_t DAT_004a8fe0;
undefined4 FUN_0038624a(void)

{
  int in_ECX;
  int in_EDX;
  
  if (DAT_004a8fe0 < *(ushort *)(in_EDX + 0x20)) {
    return 0x80000500;
  }
  if (*(int *)(in_ECX + 0x41c) == 0) {
    *(int *)(in_ECX + 0x41c) = in_EDX;
  }
  else {
    *(int *)(*(int *)(in_ECX + 0x420) + 0x24) = in_EDX;
  }
  *(int *)(in_ECX + 0x420) = in_EDX;
  FUN_0038618e();
  return 0x40000000;
}
