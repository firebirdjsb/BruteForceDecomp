/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 844690B065B2DD6B6C7CE53BBC8162FE0BFFE657B2E0516FD5DB08A003A6F8D2
 * Entry: 0x0025f890, Ghidra index: 8610, label: FUN_0025f890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392f0c;
extern uint32_t PTR_FUN_00392f1c;
void FUN_0025f890(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  *in_EAX = PTR_FUN_00392f1c;
  in_EAX[1] = PTR_FUN_00392f0c;
  FUN_0025fab0();
  FUN_0025fb40();
  puVar1 = (undefined4 *)in_EAX[8];
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_EAX[8]);
}
