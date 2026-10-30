/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B510E5F6B2E91FA6CC27BD3DD3C97AF69068E4712E02F53A4FA1C7381C767EAE
 * Entry: 0x001fe150, Ghidra index: 7224, label: FUN_001fe150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395578;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fe150(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_ECX = PTR_FUN_00395578;
  in_ECX[2] = PTR_FUN_0039c24c;
  in_ECX[3] = PTR_FUN_0039e7e8;
  puVar1 = (undefined4 *)in_ECX[6];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_000e1150(in_ECX + 5,local_4,uVar2,puVar1);
  FUN_001fb0b0();
  FUN_001fb0b0();
  puVar1 = (undefined4 *)in_ECX[0xc];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0xc]);
}
