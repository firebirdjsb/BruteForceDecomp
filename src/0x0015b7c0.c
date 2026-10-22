/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5142DF6D60C34B2C683CE920CEFC6930F5D1F5C9103C722F7D6F3BA5499925F6
 * Entry: 0x0015b7c0, Ghidra index: 4530, label: FUN_0015b7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e724;
extern uint32_t PTR_FUN_003a401c;
void FUN_0015b7c0(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 local_44 [4];
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined **local_28 [4];
  undefined1 local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  local_2c = 0xf;
  local_30 = 0;
  local_40 = 0;
  pcVar1 = &DAT_0040e724;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_0040e724,pcVar2 + -0x40e724);
  FUN_002ea02b();
  local_28[0] = &PTR_FUN_003a401c;
  local_4 = 0xf;
  local_8 = 0;
  local_18 = 0;
  FUN_0001f4f0(local_44,0,0xffffffff);
  local_28[0] = &PTR_FUN_003a401c;
                    /* WARNING: Subroutine does not return */
  FUN_002fe573(local_28,&LAB_003a55bc);
}
