/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A992282CB099F0C253F7ED377C38F5456A649115B4650280998CC3EC143FF7E
 * Entry: 0x0007a7c0, Ghidra index: 1457, label: FUN_0007a7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <string.h>
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_0023a280(int param_1);
extern undefined4 FUN_000862e0(undefined4 param_1);
extern void FUN_000854b0(void);
extern void FUN_000853c0(void);

extern uint32_t *DAT_004432f8;
extern char s__s_s_s_0040dd8c[];
undefined4 FUN_0007a7c0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  /* Original x86 uses two distinct regions: a 0x3c-byte stack record at
   * entry ESP-0x140, and a 0x104-byte text buffer at entry ESP-0x104.
   * This models only their storage/argument identities, not the guest ABI. */
  undefined1 local_140_record [0x3c];
  undefined1 local_104 [260];
  
  FUN_002eaa19(local_104,0x104,s__s_s_s_0040dd8c);
  cVar1 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,local_104);
  if ((cVar1 != '\0') && (iVar2 = FUN_0023a280(local_104), -1 < iVar2)) {
    FUN_002eaa19(local_104,0x104,s__s_s_s_0040dd8c);
    cVar1 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,local_104);
    if ((cVar1 != '\0') && (iVar2 = FUN_0023a280(local_104), -1 < iVar2)) {
      FUN_002eaa19(local_104,0x104,s__s_s_s_0040dd8c);
      cVar1 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,local_104);
      if ((cVar1 != '\0') && (iVar2 = FUN_0023a280(local_104), -1 < iVar2)) {
        /* Original x86 writes exactly these record fields before the call:
         * 0x7A8ED, 0x7A8F1, 0x7A8F6, 0x7A8FA, 0x7A903.
         * Leave all other guest bytes uninitialized as in the original. */
        memset(local_140_record + 0x14,0,4);
        memset(local_140_record + 0x04,0,2);
        memset(local_140_record + 0x1c,0,4);
        memset(local_140_record + 0x38,0,4);
        memset(local_140_record + 0x18,0,4);
        local_140_record[0x18] = 7;
        cVar1 = FUN_000862e0(local_140_record);
        if (cVar1 != '\0') {
          FUN_000854b0();
        }
        FUN_000853c0();
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x270))(unaff_retaddr);
  return 0;
}
