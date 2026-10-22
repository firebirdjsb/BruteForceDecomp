/* Xbox XAPI source-level TLS and exception-filter identities.
 *
 * Current recovered C at 0x002F5017, 0x002F503F and 0x00345472
 * multiplies _tls_index by four to index an FS-relative pointer table.
 * This motivates a DWORD source-draft declaration; it does NOT recover
 * the original Xbox TLS block, thread environment or a native-PC model.
 *
 * Current C at 0x002F4CB2/0x002F4CC4 stores an unhandled-exception
 * callback identity then invokes it indirectly. This represents only
 * the observed callable pointer identity, NOT verified calling
 * convention, argument signature, pointer width or PC SEH behavior.
 * No actual callback/FS state is defined here.
 */
#ifndef BF_XBOX_XAPI_TLS_FILTER_SOURCE_H
#define BF_XBOX_XAPI_TLS_FILTER_SOURCE_H
#include "bf_ghidra_types.h"
extern uint32_t _tls_index;
extern code *g_XapiCurrentTopLevelFilter;
#endif
