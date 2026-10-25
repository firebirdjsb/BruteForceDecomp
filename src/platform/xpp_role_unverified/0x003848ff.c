/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8AB60808DE301B60ED91B440B015F05CB1ABC38058E8C7C26412DD8512DA356
 * Entry: 0x003848ff, Ghidra index: 13651, label: FUN_003848ff
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
void FUN_003848ff(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint32_t guest_param_1_word;
  
  piVar2 = param_1;
  param_1[0x11c] = param_3;
  param_1[0x11d] = param_4;
  iVar1 = *param_1;
  /* XBE 0x0038491d: MOV WORD [EBP+8],0x0010 modifies only the low
   * 16 bits of the original 32-bit stack argument. 0x00384923 reloads
   * its full DWORD; 0x00384926 stores that DWORD at [ECX+EDX*4+0x50].
   * ABI_UNVERIFIED: the host pointer cast is only a guest32 draft stand-in;
   * native guest-memory translation and incoming stack ownership remain TODO. */
  guest_param_1_word = bf_x86_word_replace_lo16((uint32_t)(uintptr_t)param_1,
                                                   UINT16_C(0x0010));
  *(uint32_t *)(iVar1 + 0x50 + param_2 * 4) = guest_param_1_word;
  KeSetTimer(piVar2 + 0x11e,0xfff0bdc0,0xffffffff,piVar2 + 0x128);
  return;
}
