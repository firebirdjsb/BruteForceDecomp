/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBF927415A52C47E95EB8132011C5F28F1247D537D83097CC9CE7BBFCAD79593
 * Entry: 0x002a5060, Ghidra index: 9560, label: FUN_002a5060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00390d28;
extern uint32_t PTR_FUN_00390d58;
extern uint32_t PTR_LAB_00390ddc;
void FUN_002a5060(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  undefined1 auStack_4 [4];
  
  in_ECX[-1] = PTR_FUN_00390d58;
  *in_ECX = PTR_FUN_00390d28;
  FUN_002a57c0(in_ECX + -1,in_ECX[7]);
  piVar1 = (int *)in_ECX[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[7] = 0;
  }
  puVar2 = (undefined4 *)(-(uint)(in_ECX != (undefined4 *)0x4) & (uint)in_ECX);
  *puVar2 = &PTR_LAB_00390ddc;
  FUN_002a0340();
  FUN_0029ff80(auStack_4,*(undefined4 *)puVar2[3],(undefined4 *)puVar2[3]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(puVar2[3]);
}
