/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F07CA4CE9DC25C16584A02AF2A2ADC653F9BDFC483EA0FEC4DB9EDDF3341CB19
 * Entry: 0x0013f480, Ghidra index: 4052, label: FUN_0013f480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039c358;
void FUN_0013f480(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = PTR_FUN_0039c358;
  FUN_0013f8d0(in_ECX);
  FUN_0013f660();
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[3]);
}
