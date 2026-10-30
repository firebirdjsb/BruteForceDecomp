// Compatibility adapter for REA 6.8.0 + Kilo Code's 128-tool request cap.
// Filters only MCP tools/list advertisements. All other JSON-RPC messages
// pass between Kilo and REA unchanged. No game binaries or source files changed.
import { spawn } from 'node:child_process';
import { createInterface } from 'node:readline';

const MAX_TOOLS = 70; // Leaves room for Kilo built-ins and other small servers.
const priorityNames = [
  'binary_session', 'open_binary', 'close_binary', 'binary_overview',
  'list_procedures', 'procedure_pseudo_code', 'procedure_assembly',
  'procedure_callers', 'procedure_callees', 'procedure_references',
  'analyze_function', 'inspect_analysis_view', 'get_call_graph',
  'trace_call_path', 'build_call_path', 'decompile_all',
  'match_native_functions', 'trace_native_values', 'inspect_binary_layout',
  'list_symbols', 'search_symbols', 'search_strings',
  'get_evidence_bundle', 'export_evidence_bundle',
  'list_unknowns', 'record_unknown', 'update_unknown',
  'compare_functions', 'get_procedure', 'get_current_address',
];
const priority = new Map(priorityNames.map((name, i) => [name, 1000 - i]));
const irrelevant = /(?:android|(?:^|_)adb(?:_|$)|apk|apktool|browser|electron|javascript|flutter|dart|frida|webmcp|pcap|packet|websocket|http_|https_|wasm|firmware|ios_|macos|macho|swift|objective_c|lldb|gdb|rizin|cutter|jadx|jeb_|kuna|sqlite|plist|dotnet|managed|unity|rust_|network_|process_scenario|capture_process|screenshot|environment_|agentenv)/i;
const coreWords = /(?:binary|procedure|function|pseudo|assembly|disassembl|reference|xref|call|native|symbol|string|segment|address|byte|memory|register|stack|vtable|dispatch|type|graph|decompil|evidence|unknown|snapshot|analysis|bookmark|comment|label)/i;
const choose = (tools) => {
  const scored = tools.map((tool, index) => {
    const n = String(tool.name || '');
    const p = priority.get(n);
    const score = p ?? (irrelevant.test(n) ? -1 : coreWords.test(n) ? 100 : 0);
    return { tool, index, score };
  });
  return scored
    .filter(x => x.score > 0)
    .sort((a, b) => b.score - a.score || a.index - b.index)
    .slice(0, MAX_TOOLS)
    .sort((a, b) => a.index - b.index)
    .map(x => x.tool);
};

const child = spawn('cmd.exe', ['/d', '/c', 'npx', '-y', 'rea-agents@6.8.0', 'mcp'], {
  stdio: ['pipe', 'pipe', 'inherit'],
  windowsHide: true,
  env: process.env,
});
child.stdin.on('error', (err) => { if (err.code !== 'EPIPE') process.stderr.write(`[rea-mcp-filter] REA stdin error: ${err.message}\n`); });
const pendingToolLists = new Set();
const key = id => JSON.stringify(id);

createInterface({ input: process.stdin, crlfDelay: Infinity }).on('line', line => {
  try {
    const message = JSON.parse(line);
    if (message.method === 'tools/list' && Object.hasOwn(message, 'id')) {
      pendingToolLists.add(key(message.id));
    }
  } catch { /* Forward unchanged, so REA can report invalid requests. */ }
  if (!child.stdin.destroyed) child.stdin.write(line + '\n');
});

createInterface({ input: child.stdout, crlfDelay: Infinity }).on('line', line => {
  try {
    const msg = JSON.parse(line);
    if (Object.hasOwn(msg, 'id') && pendingToolLists.delete(key(msg.id)) && Array.isArray(msg.result?.tools)) {
      const original = msg.result.tools;
      msg.result.tools = choose(original);
      process.stderr.write(`[rea-mcp-filter] Published ${msg.result.tools.length}/${original.length} REA tools to Kilo.\n`);
      process.stdout.write(JSON.stringify(msg) + '\n');
      return;
    }
  } catch { /* Preserve unexpected upstream messages. */ }
  process.stdout.write(line + '\n');
});

child.on('error', err => { process.stderr.write(`[rea-mcp-filter] REA launch failed: ${err.message}\n`); process.exitCode = 1; });
child.on('exit', code => { process.exit(code ?? 1); });
process.stdin.on('end', () => child.stdin.end());
process.on('SIGINT', () => child.kill('SIGINT'));
