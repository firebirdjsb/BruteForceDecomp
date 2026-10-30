/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6C349C3F8C2EAF6E6B8932AAF6F838A0F3B35F2EA373830813523E3B6E19A07
 * Entry: 0x0017ab50, Ghidra index: 5021, label: FUN_0017ab50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00399d94;
void FUN_0017ab50(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_LAB_00399d94;
  unaff_ESI[0x48] = 0xf;
  unaff_ESI[0x47] = 0;
  *(undefined1 *)(unaff_ESI + 0x43) = 0;
  unaff_ESI[0x4a] = 0;
  unaff_ESI[0x4b] = 0;
  unaff_ESI[0x4c] = 0;
  /* 0x17ab50 reads the low byte of the initialized incoming pointer
   * word; 0x17ab5c independently retains its full value for string reads.
   * Guest pointer relocation remains ABI_UNVERIFIED. */
  *(undefined1 *)(unaff_ESI + 0x4d) = bf_x86_word_load_byte(&param_1,0U);
  iVar2 = FUN_0017d240(unaff_ESI + 0x4d);
  unaff_ESI[0x4e] = iVar2;
  *(undefined1 *)(iVar2 + 0x81) = 1;
  *(undefined4 *)(unaff_ESI[0x4e] + 4) = unaff_ESI[0x4e];
  *(undefined4 *)unaff_ESI[0x4e] = unaff_ESI[0x4e];
  *(undefined4 *)(unaff_ESI[0x4e] + 8) = unaff_ESI[0x4e];
  unaff_ESI[0x4f] = 0;
  unaff_ESI[0x50] = 0;
  unaff_ESI[0x51] = 0;
  iVar2 = 4 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)unaff_ESI + iVar2] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  unaff_ESI[0x52] = 1;
  unaff_ESI[0x53] = 1;
  unaff_ESI[0x54] = 1;
  unaff_ESI[0x55] = 1;
  unaff_ESI[0x56] = 1;
  unaff_ESI[0x57] = 0;
  unaff_ESI[0x58] = 1;
  return;
}
