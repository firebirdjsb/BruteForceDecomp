/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4F86F399731BAB8A9BE9E10B963D46B6C7F58D05B1157EA333FB12ABA1DC777
 * Entry: 0x00225f70, Ghidra index: 7638, label: FUN_00225f70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003a55f8;
extern uint32_t DAT_0040e710;
extern uint32_t PTR_FUN_003a401c;
void FUN_00225f70(void)

{
  char *pcVar1;
  char *pcVar2;
  uint in_ECX;
  int in_EDX;
  undefined1 local_44 [4];
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined **local_28 [4];
  undefined1 local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  if (0x2108421U - *(int *)(in_EDX + 8) < in_ECX) {
    local_2c = 0xf;
    local_30 = 0;
    local_40 = 0;
    pcVar1 = &DAT_0040e710;
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    FUN_0001fed0(&DAT_0040e710,pcVar2 + -0x40e710);
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
  *(uint *)(in_EDX + 8) = *(int *)(in_EDX + 8) + in_ECX;
  return;
}
