-- Copyright © 2008-2021 Pioneer Developers. See AUTHORS.txt for details
-- Licensed under the terms of the GPL v3. See licenses/GPL-3.txt

-- this is the only library automatically loaded at startup
-- its the right place to extend core Lua tables

require 'SpaceStation'

math.round = function(v)
	return (math.modf(v + (v < 0.0 and -.5 or .5)))
end

math.sign = function(v)
	return (v > 0 and 1) or (v == 0 and 0) or -1
end

math.clamp = function(v, min, max)
	return math.min(max, math.max(v,min))
end

debug.deprecated = function(name)
	local deprecated_function = debug.getinfo(2)
	local caller = debug.getinfo(3)
	local ending = ""
	if caller then
		ending = "The call originated at <"..caller.source..":"..caller.currentline..">."
	else
		ending = "It is not possible to retrace the caller."
	end
	print("The function \""..(name or deprecated_function.name or "[unknown]").."\" has changed its interface or is deprecated. "..ending)

	print("Please check the changelogs and/or get in touch with the development team.")
end

-- a nice string interpolator
string.interp = function (s, t)
	return (s:gsub('(%b{})', function(w) return t[w:sub(2,-2)] or w end))
end

-- make import break. you should never import this file
return nil
