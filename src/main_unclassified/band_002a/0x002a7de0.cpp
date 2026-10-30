/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22B7B92234477A121DA295ED99957E32C8CA8928E89AB4BC515FEB4CA339F9EB
 * Entry: 0x002a7de0, Ghidra index: 9603, label: FUN_002a7de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00390ddc;
void FUN_002a7de0(void)

{
  uint in_EAX;
  undefined4 *puVar1;
  undefined1 local_4 [4];
  
  puVar1 = (undefined4 *)(-(uint)(in_EAX != 4) & in_EAX);
  *puVar1 = PTR_LAB_00390ddc;
  FUN_002a0340();
  FUN_0029ff80(local_4,*(undefined4 *)puVar1[3],(undefined4 *)puVar1[3]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(puVar1[3]);
}
