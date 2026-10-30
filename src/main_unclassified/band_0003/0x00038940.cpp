/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2391176AE6B0EB5182D94A65EE65185DFE4BFB85413A792EDB0D3A403BA1F82
 * Entry: 0x00038940, Ghidra index: 378, label: FUN_00038940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003a55f8;
extern uint32_t DAT_0040e76c;
extern uint32_t PTR_FUN_003a401c;
void FUN_00038940(void)

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
  pcVar1 = &DAT_0040e76c;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_0040e76c,pcVar2 + -0x40e76c);
  FUN_002ea02b();
  local_28[0] = &PTR_FUN_003a401c;
  local_4 = 0xf;
  local_8 = 0;
  local_18 = 0;
  FUN_0001f4f0(local_44,0,0xffffffff);
  local_28[0] = &PTR_FUN_003a401c;
                    /* WARNING: Subroutine does not return */
  FUN_002fe573(local_28,&DAT_003a55f8);
}
