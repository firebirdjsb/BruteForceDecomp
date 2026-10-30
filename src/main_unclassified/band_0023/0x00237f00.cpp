/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1FA422F4AF19BBD850BB89527C3139C36DAE504A5771F8CDEA71327EC9D804E
 * Entry: 0x00237f00, Ghidra index: 7862, label: FUN_00237f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00443080;
extern uint32_t DAT_004698fc;
extern uint32_t DAT_00469b29;
extern uint32_t DAT_0046cfa0;
extern uint32_t DAT_004a5b40;
extern uint32_t DAT_004a5b44;
extern uint32_t DAT_004a5b48;
extern uint32_t DAT_004a5b49;
extern char s_d__mem__d__d__s_txt_00406c30[];
void FUN_00237f00(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  /* Original XBE 0x00237F05 reserves 0x104 guest bytes. Three separate
   * LEA sites at 0x237F4A, 0x237F59 and 0x237F75 resolve to the same
   * entry-ESP-0x104 byte buffer. No zero-initialization is established.
   * Guest pointer translation, formatter and Xbox file APIs are
   * ABI_UNVERIFIED for host-native runtime; only source storage alias
   * and visible x86 stack capacity are reconstructed here. */
  char guest_log_path[0x104];
  _Static_assert(sizeof(guest_log_path) == 0x104,
                 "original 0x104-byte guest log buffer");

  if ((DAT_004a5b49 != '\0') || (DAT_00469b29 != '\0')) {
    RtlEnterCriticalSection(&DAT_0046cfa0);
    iVar1 = DAT_004a5b40;
    DAT_004a5b40 = DAT_004a5b40 + 1;
    FUN_002eaa19(guest_log_path,0x104,s_d__mem__d__d__s_txt_00406c30,DAT_004a5b44,iVar1,
                 unaff_retaddr);
    thunk_FUN_002fe95d(guest_log_path);
    iVar1 = FUN_002f2b3f(guest_log_path,0x40000000,0,0,2,0,0);
    if (iVar1 != -1) {
      if ((DAT_004a5b48 == '\0') && (iVar2 = 0, 0 < DAT_004698fc)) {
        do {
          FUN_00237590();
          iVar2 = iVar2 + 1;
        } while (iVar2 < DAT_004698fc);
      }
      FUN_00258970(&DAT_00443080);
      FUN_00258a20(&DAT_00443080);
      XAPILIB__CloseHandle(iVar1);
    }
    RtlLeaveCriticalSection(&DAT_0046cfa0);
  }
  return;
}